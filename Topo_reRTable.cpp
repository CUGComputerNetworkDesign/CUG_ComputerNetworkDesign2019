#include"Topo.h"
void Topo::reRTable()        //��ʼ��·�ɱ�
{
    deleteRTable();
    Table*tp=head;
    Router*rp=tp->data;
    Line*lp=rp->LineHead;
    RouterTable*rtp=rp->RTableHead;
    while(tp!=nullptr)//·����
    {
        rp=tp->data; //·����
        lp=rp->LineHead;//������
        while(lp!=nullptr)//��
        {
            rtp=rp->RTableHead;//·�ɱ�
            RouterTable*rtpp=new RouterTable(lp->IP2,lp->IP2,lp->weight,rtp);
            rp->RTableHead=rtpp;
            lp=lp->next;
        }
        tp=tp->next;
    }
}
