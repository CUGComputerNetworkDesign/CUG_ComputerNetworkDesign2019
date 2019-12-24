#include"Router.h"
#include <iostream>
using namespace std;
bool Router::DeleteLine(int *IP)               //删除一条边
{
  //  cout<<"#########"<<IP[0]<<endl;
    Line *p = LineHead;
    Line *p1 = nullptr;
    while(p!=nullptr)
    {
        if(p->IP2[0]==IP[0]&&p->IP2[1]==IP[1]&&p->IP2[2]==IP[2]&&p->IP2[3]==IP[3])
        {
       //     cout<<"p->IP1[0]"<<p->IP1[0]<<"p->IP2[0]"<<p->IP2[0]<<endl;
            if(p1 != nullptr)
            {
                p1->next=p->next;
                delete p; //cout<<"IP:"<<RouterIP[0]<<endl;PrintRtable();
                return true;
            }
            else   //p为头
            {
                LineHead = p->next;
                delete p;//cout<<"IP:"<<RouterIP[0]<<endl;PrintRtable();
                return true;
            }
        }
        p1 = p;                               //暂存
        p = p->next;
    }

    return false;
}
