#ifndef TOPO_H_INCLUDED
#define TOPO_H_INCLUDED
#include"Table.h"
#include"RouterTable.h"
#include"Line.h"
#include"Router.h"
#include<iostream>
#include<fstream>
using namespace std;
class Topo
{
    public:
        Table*head;
        Topo();
        void routerFile(string filename);//从文件读取路由器信息进行初始化
        void networkFile(string filename);//从文件读取边信息
        bool Insert(int *R1,int *R2,int weight,bool Double = true); //插入
        bool DeleteRouter(int *R);               //删除路由器
        bool DeleteLine(int *R1,int *R2);        //删除路径
        bool NewRouter(int *IP);
        bool PrintRouter(int *Ip);
        bool Rip();                              //构建路由表
        void deleteRTable();    //删除路由表
        void reRTable();        //初始化路由表
};

#endif // TOPO_H
