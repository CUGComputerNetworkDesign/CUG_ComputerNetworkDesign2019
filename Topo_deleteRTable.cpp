#include"Topo.h"
void Topo::deleteRTable()   //ɾ��·�ɱ�
{
    Table*tp=head;
    Router*rp=tp->data;
    RouterTable*rtp=rp->RTableHead;
    while(tp!=nullptr)
    {
        rp=tp->data;//·����
        rtp=rp->RTableHead;
        while(rtp!=nullptr)//·�ɱ�
        {
            rp->RTableHead=rtp->next;
            delete rtp;
            rtp=rp->RTableHead;
        }
        tp=tp->next;
    }
}
