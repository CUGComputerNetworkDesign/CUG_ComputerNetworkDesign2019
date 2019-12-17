#ifndef ROUTER_H_INCLUDED
#define ROUTER_H_INCLUDED
#include"Table.h"
class Router
{
private:
    int RouterIP[4]; //IP地址
    bool Status;     //状态
    Line *LineHead;   //邻接表
    RouterTable *RTableHead;//路由表
public:
    Router(int *IP);               //只初始化变量
    void BuildLine(int *IP,int weight);      //为路由器添加一个新的物理连接
    bool DeleteLine(int *IP);                //删除一条边
    void RoterOffLine(void){Status=0;}      //路由器下线,状态置0
    void RoterOnline(void){Status=1;}       //路由器上线,状态置1
    void UpdateRtable(int * IP,Routertable* head); //更新路由表
};


#endif // ROUTER_H_INCLUDED
