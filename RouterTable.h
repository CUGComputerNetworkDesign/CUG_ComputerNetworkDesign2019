#ifndef ROUTERTABLE_H_INCLUDED
#define ROUTERTABLE_H_INCLUDED

class RouterTable     //路由表的节点
{
public:
  int D_IP[4];      //目的IP
  int NEXT_IP[4];  //下一跳IP
  int length;
  RouterTable *next;//链表的next指针
  RouterTable(int *dIP,int *nIP,int len,RouterTable* n);
  RouterTable(){for(int i=0;i<4;i++){D_IP[i]=0;NEXT_IP[i]=0;} length=0;next=0;}
}; //边类

#endif
