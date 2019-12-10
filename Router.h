#ifndef ROUTER_H_INCLUDED
#define ROUTER_H_INCLUDED
#include"Table.h"
class Router
{
private:
    int RouterID;
    bool Status;
    Line *LineHead;
    RTable *RTableHead;
public:
    Router();                                                           //只初始化变量
    void BuildLine(int RouterID,int RouterID,int weight);               //为路由器添加一个新的物理连接
    void RoterOffLine(void);                                            //路由器下线
    void RoterOnline(void);                                             //路由器上线
    void UpdateRtable(Rtable* head);                                    //更新路由表

};


#endif // ROUTER_H_INCLUDED
