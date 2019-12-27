#include"Topo.h"
void Topo::deleteRTable()   //删除路由表
{
    Table*tp=head;
    Router*rp=tp->data;
    RouterTable*rtp=rp->RTableHead;
    while(tp!=nullptr)
    {
        rp=tp->data;//路由器
        rtp=rp->RTableHead;
        while(rtp!=nullptr)//路由表
        {
            rp->RTableHead=rtp->next;
            delete rtp;
            rtp=rp->RTableHead;
        }
        tp=tp->next;
    }
}
