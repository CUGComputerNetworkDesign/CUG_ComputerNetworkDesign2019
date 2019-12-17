#ifndef TABLE_H_INCLUDED
#define TABLE_H_INCLUDED

#include<iostream>
using namespace std
class Table
{
   public:
   Router*data;                 //指向一个路由器实例。
   Table*next;                  //链表的next指针
   Table()
   {Table*next=NULL;} //构造函数，调用路由器的构造函数。
};

#endif
