#include"Router.h"

void UpdateRtable(int *IP,Rtable* head) //����·�ɱ�
{
    Rtable*p1=RtableHead;//�Լ���·�ɱ�
    Rtable*p2=head;//��������·�ɱ�
    while(p2!=NULL)
    {
        while(p1!=NULL) //�����Լ���·�ɱ�
        {
            if(p1->D_IP[0]==p2->D_IP[0]&&p1->D_IP[1]==p2->D_IP[1]
               &&p1->D_IP[2]==p2->D_IP[2]&&p1->D_IP[3]==p2->D_IP[3])//�ҵ�Ŀ�ĵ�ַ��ͬ����
                {
                    if(p1->)
                }
            else p1=p1->next;
        }
    }
}
