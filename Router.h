#ifndef ROUTER_H_INCLUDED
#define ROUTER_H_INCLUDED
#include"Table.h"
class Router
{
private:
    int RouterIP[3];
    bool Status;
    Line *LineHead;
    RTable *RTableHead;
public:
    Router(int *IP);               //只初始化变量
    void BuildLine(int *IP,int weight);      //为路由器添加一个新的物理连接
    void RoterOffLine(void){Status=0;}      //路由器下线,状态置0
    void RoterOnline(void){Status=1;}       //路由器上线,状态置1
    void UpdateRtable(int IP,Rtable* head); //更新路由表
};


#endif // ROUTER_H_INCLUDED
