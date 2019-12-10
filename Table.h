#ifndef TOPO_H
#define TOPO_H

#include<iostream>
using namespace std
class Table
{
   public:
   Router*data;                 //指向一个路由器实例。
   Table*next;                  //链表的next指针
   Table(int ID,Table* next);   //构造函数，调用路由器的构造函数。
};

#endif
