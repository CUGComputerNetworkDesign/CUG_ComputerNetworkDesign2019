#include"Router.h"

void Router::BuildLine(int* IP,int weight)  //Ϊ·�������һ���µ���������
{
    Line*p=NULL;
    p=new Line(RouterIP,IP,weight);  //����һ����
    Line*pp=LineHead->next;
    LineHead->next=p;       //��������
    p->next=pp;
    return ;
}
