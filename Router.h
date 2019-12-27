#ifndef ROUTER_H_INCLUDED
#define ROUTER_H_INCLUDED
#include"Line.h"
#include"RouterTable.h"

class Router
{
public:
    int RouterIP[4];                                //IP地址
    bool Status;                                    //状态
    Line *LineHead;                                 //邻接表
    RouterTable *RTableHead;                        //路由表

    Router(int *IP);                                //只初始化变量
    void BuildLine(int *IP,int weight);             //为路由器添加一个新的物理连接
    bool DeleteLine(int *IP);                       //删除一条边
    void RouterOffLine(void){Status=0;}             //路由器下线,状态置0
    void RouterOnline(void){Status=1;}              //路由器上线,状态置1
    bool UpdateRtable(int * IP,RouterTable* head);  //更新路由表
    bool PrintRtable(void);
};


#endif // ROUTER_H_INCLUDED
