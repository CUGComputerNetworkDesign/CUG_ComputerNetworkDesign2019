#include"Router.h"
#include <iostream>
using namespace std;
bool Router::DeleteLine(int *IP)               //ɾ��һ����
{
    Line *p = LineHead;
    Line *p1 = nullptr;
    while(p!=nullptr)
    {
        if(p->IP2[0]==IP[0]&&p->IP2[1]==IP[1]&&p->IP2[2]==IP[2]&&p->IP2[3]==IP[3])
        {

            if(p1 != nullptr)
            {
                p1->next=p->next;
                delete p;
                return true;
            }
            else   //pΪͷ
            {
                LineHead = p->next;
                delete p;
                return true;
            }
        }
        p1 = p;                               //�ݴ�
        p = p->next;
    }
    return false;
}
