#include"Router.h"
#include<iostream>
using namespace std;
extern bool IPcmp(int *ip1,int *ip2);
void Router::BuildLine(int* IP,int weight)  //为路由器添加一个新的物理连接
{
    Line*p = nullptr;
    p= new Line(RouterIP,IP,weight);  //创建一个边
    p->next = LineHead;
    LineHead = p;
    Line*pp=LineHead->next;//cout << "start! " << endl;
    LineHead->next=p;       //插入链表
    p->next=pp;

    RouterTable*rtp=RTableHead;//将新添加的边加入路由表
    RouterTable*temp = RTableHead;
    for(;temp != nullptr;temp = temp->next){
        if(IPcmp(temp->D_IP,IP)){
            break;
        }
    }
    if(temp != nullptr){
        if(temp->length > weight){
            temp->NEXT_IP[0] = IP[0];
            temp->NEXT_IP[1] = IP[1];
            temp->NEXT_IP[2] = IP[2];
            temp->NEXT_IP[3] = IP[3];
            temp->length = weight;
        }
    }
    else{
        RouterTable*rtpp=new RouterTable(IP,IP,weight,rtp);
        RTableHead=rtpp;
        return ;
    }

}
