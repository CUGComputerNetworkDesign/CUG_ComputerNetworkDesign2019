#ifndef TOPO_H
#define TOPO_H
#include"Table.h"
#include"RTable.h"
#include"Line.h"
#include"Router.h"

class Topo
{
    public:
        Table*head;
        Topo();
        virtual ~Topo();
        bool Insert(int *R1,int *R2,int weight);  //插入
        bool DeleteRouter(int *R);               //删除路由器
        bool DeleteLine(int *R1,int *R2);         //删除路径
        void Rip();                             //构建路由表
    protected:

    private:
};

#endif // TOPO_H
