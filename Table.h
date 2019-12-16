#ifndef TABLE_H_INCLUDED
#define TABLE_H_INCLUDED

#include<iostream>
using namespace std
class Table
{
   public:
   int D_IP[3];
   int NEXT_IP[3];
   Router*data;                 //指向一个路由器实例。
   Table*next;                  //链表的next指针
   Table(int *dIP,int *nIP,Table* next)
   {
      for(,i<4,i++)
      {
          D_IP[i]=dIP;
          NEXT_IP[i]=nIP;
      }
       Table*next=NULL;
   } //构造函数，调用路由器的构造函数。
};

#endif
