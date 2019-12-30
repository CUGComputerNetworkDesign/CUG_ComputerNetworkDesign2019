#include"Router.h"
#include<iostream>
using namespace std;
Router::Router(int *IP) //¹¹Ôìº¯Êý
{
    for(int i=0;i<4;i++)
        RouterIP[i]=IP[i];
    Status=1;
    RTableHead = nullptr;
    RTableHead=new RouterTable(IP,IP,0,RTableHead);
    LineHead = nullptr;
    cout<<"Duan!!!!!"<<endl;
    return ;
}
