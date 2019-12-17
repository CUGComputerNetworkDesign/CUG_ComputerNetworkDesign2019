#include"Router.h"
Router::Router(int *IP) //¹¹Ôìº¯Êı
{
    for(int i=0;i<4;i++)
        RouterIP[i]=IP[i];
    return ;
}
