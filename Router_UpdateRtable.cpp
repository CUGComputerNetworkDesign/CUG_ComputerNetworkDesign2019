#include"Router.h"
#include"RouterTable.h"
#include<iostream>
using namespace std;
bool Router::UpdateRtable(int *IP,RouterTable* head){ //����·�ɱ�
    //cout << IP[0] << IP[1] << IP[2] << IP[3] << endl;
    RouterTable*p1 = RTableHead;//�Լ���·�ɱ�
    RouterTable*p2 = head;      //��������·�ɱ�
    Line*p=LineHead;            //�Լ���Line��
    int weight=0;
    bool judge = false;//�ж��Ƿ���й�����
    while(p!=nullptr)   //����Ȩֵ
    {
        if(p->IP2[0]==IP[0]&&p->IP2[1]==IP[1]&&p->IP2[2]==IP[2]&&p->IP2[3]==IP[3]){
            weight=p->weight;
        }
        p=p->next;
    }
    while(p2!=nullptr)
    {
        p1 = RTableHead;
        while(p1!=nullptr) //�����Լ���·�ɱ�
        {
            if(p1->D_IP[0]==p2->D_IP[0]&&p1->D_IP[1]==p2->D_IP[1]
               &&p1->D_IP[2]==p2->D_IP[2]&&p1->D_IP[3]==p2->D_IP[3])//�ҵ�Ŀ�ĵ�ַ��ͬ����
                {
                 //   cout<<"D_IP:"<<p1->D_IP[0]<<p2->D_IP[0];
                 //   cout<<"old:"<<p1->length<<"new:"<<p2->length+weight<<endl;
                    if(p1->length>(p2->length+weight)) //�´��ݵ�·����
                    {
                        p1->length=p2->length+weight;// �޸�·�ɱ�
                        for(int i=0;i<4;i++)
                           p1->NEXT_IP[i]=IP[i];
                        judge=true;  //�޸ı�־
                        //cout<<"change"<<endl;
                    }
                    break;
                }
            else p1=p1->next;
        }
        if(p1==nullptr){   //��·�ɱ��������·��
            RouterTable*rtp=RTableHead;//������ӵı߼���·�ɱ�
            RouterTable*rtpp=new RouterTable(p2->D_IP,IP,p2->length+weight,rtp);
            RTableHead=rtpp;
            judge=true;
            //cout<<"add"<<rtpp->D_IP[0]<<endl;
        }
        p2=p2->next; //Ѱ����һ��
    }
    //cout<<"no"<<endl;
    return judge;
}
