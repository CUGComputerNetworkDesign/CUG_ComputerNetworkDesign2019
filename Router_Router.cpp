#include"Router.h"
Router::Router(int *IP) //���캯��
{
    for(int i=0;i<4;i++)
        RouterIP[i]=IP[i];
    Status=1;
    RTableHead=new RouterTable;
    LineHead = nullptr;
    return ;
}
