#include"Router.h"

void UpdateRtable(int *IP,Rtable* head) //更新路由表
{
    Rtable*p1=RtableHead;//自己的路由表
    Rtable*p2=head;//传进来的路由表
    while(p2!=NULL)
    {
        while(p1!=NULL) //遍历自己的路由表
        {
            if(p1->D_IP[0]==p2->D_IP[0]&&p1->D_IP[1]==p2->D_IP[1]
               &&p1->D_IP[2]==p2->D_IP[2]&&p1->D_IP[3]==p2->D_IP[3])//找到目的地址相同的行
                {
                    if(p1->)
                }
            else p1=p1->next;
        }
    }
}
