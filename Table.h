#ifndef TABLE_H_INCLUDED
#define TABLE_H_INCLUDED
#include"Router.h"
#include<iostream>
using namespace std;
class Table
{
public:
   Router*data;                //指向一个路由器实例。
   Table*next;                  //链表的next指针
   Table(){data=NULL;next=NULL;}
   Table(int * ip,Table* nex);  //构造函数，调用路由器的构造函数。
};

#endif
