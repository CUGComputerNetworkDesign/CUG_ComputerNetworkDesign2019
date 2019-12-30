#include"Topo.h"
#include<cstdlib>
extern bool IPcmp(int *ip1,int *ip2);

bool Topo::DeleteRouter(int *ip){
    Table* ptr = head;
    Table* last = nullptr;
    Table* temp = head;
    Line*lp = nullptr,*lpp=nullptr;

    for(ptr = head;ptr != nullptr;ptr = ptr->next)
    {
        if(IPcmp(ip,ptr->data->RouterIP))//�ҵ�ָ�����·������ָ��
            break;
        if(last == nullptr)
            last = head;               //�ҵ�ָ�����·����ǰһ���ڵ�����ɾ��
        else last = ptr;
    }

    if(ptr != nullptr)
        lp = ptr->data->LineHead;            //��·����ժ�������ٽ�������ɾ��
    else return false;

    while(lp!=nullptr)   //ɾ����
        {
            lpp=lp->next;
            DeleteLine(lp->IP1,lp->IP2);
            lp=lpp;
        }

    if(last == nullptr)     //������ɾ��·����
        head = head->next;
    else  last->next = ptr->next;
    delete ptr;

    reRTable();


    return true;
}
