#include"Router.h"

void UpdateRtable(int *IP,Routertable* head) //更新路由表
{
    Rtable*p1=RtableHead;//自己的路由表
    Rtable*p2=head;//传进来的路由表
    Line*p=LineHead;
    int weight=0;
    while(p!=NULL)
    {
        if(p->IP2[0]==IP[0]&&p->IP2[1]==IP[1]&&p->IP2[2]==IP[2]&&p->IP2[3]==IP[3])
            weigtht=p->weight;
    }
    while(p2!=NULL)
    {
        while(p1!=NULL) //遍历自己的路由表
        {
            if(p1->D_IP[0]==p2->D_IP[0]&&p1->D_IP[1]==p2->D_IP[1]
               &&p1->D_IP[2]==p2->D_IP[2]&&p1->D_IP[3]==p2->D_IP[3])//找到目的地址相同的行
                {
                    if(p1->length<(p2->length+weight)) //新传递的路径短
                    {
                        p1->length=p2->length+weight;// 修改路由表
                        for(int i=0;i<4;i++)
                           p1->NEXT_IP[i]=IP[i];
                    }
                }
            else p1=p1->next;
        }
        p2=p2->next; //寻找下一行
    }
    return ;
}
