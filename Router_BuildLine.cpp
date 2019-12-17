#include"Router.h"

void Router::BuildLine(int* IP,int weight)  //为路由器添加一个新的物理连接
{
    Line*p=NULL;
    p=new Line(RouterIP,IP,weight);  //创建一个边
    Line*pp=LineHead->next;
    LineHead->next=p;       //插入链表
    p->next=pp;
    return ;
}
