#include"Topo.h"
void Topo::reRTable()        //初始化路由表
{
    deleteRTable();
    Table*tp=head;
    Router*rp=tp->data;
    Line*lp=rp->LineHead;
    RouterTable*rtp=rp->RTableHead;
    while(tp!=nullptr)//路由器
    {
        rp=tp->data; //路由器
        lp=rp->LineHead;//边链表
        while(lp!=nullptr)//边
        {
            rtp=rp->RTableHead;//路由表
            RouterTable*rtpp=new RouterTable(lp->IP2,lp->IP2,lp->weight,rtp);
            rp->RTableHead=rtpp;
            lp=lp->next;
        }
        tp=tp->next;
    }
}
