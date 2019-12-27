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
        if(IPcmp(ip,ptr->data->RouterIP))//找到指向这个路由器的指针
            break;
        if(last == nullptr)
            last = head;               //找到指向这个路由器前一个节点用于删除
        else last = ptr;
    }

    if(ptr != nullptr)
        lp = ptr->data->LineHead;            //把路由器摘出来，再进行其他删除
    else return false;

    while(lp!=nullptr)   //删除边
        {
            lpp=lp->next;
            DeleteLine(lp->IP1,lp->IP2);
            lp=lpp;
        }

    if(last == nullptr)     //从链表删除路由器
        head = head->next;
    else  last->next = ptr->next;
    delete ptr;

    reRTable();


    return true;
}
