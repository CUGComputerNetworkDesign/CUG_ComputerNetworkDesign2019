#include"Router.h"

void UpdateRtable(int *IP,Routertable* head) //����·�ɱ�
{
    Rtable*p1=RtableHead;//�Լ���·�ɱ�
    Rtable*p2=head;//��������·�ɱ�
    Line*p=LineHead;
    int weight=0;
    while(p!=NULL)
    {
        if(p->IP2[0]==IP[0]&&p->IP2[1]==IP[1]&&p->IP2[2]==IP[2]&&p->IP2[3]==IP[3])
            weigtht=p->weight;
    }
    while(p2!=NULL)
    {
        while(p1!=NULL) //�����Լ���·�ɱ�
        {
            if(p1->D_IP[0]==p2->D_IP[0]&&p1->D_IP[1]==p2->D_IP[1]
               &&p1->D_IP[2]==p2->D_IP[2]&&p1->D_IP[3]==p2->D_IP[3])//�ҵ�Ŀ�ĵ�ַ��ͬ����
                {
                    if(p1->length<(p2->length+weight)) //�´��ݵ�·����
                    {
                        p1->length=p2->length+weight;// �޸�·�ɱ�
                        for(int i=0;i<4;i++)
                           p1->NEXT_IP[i]=IP[i];
                    }
                }
            else p1=p1->next;
        }
        p2=p2->next; //Ѱ����һ��
    }
    return ;
}
