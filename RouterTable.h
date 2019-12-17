#ifndef ROUTERTABLE_H_INCLUDED
#define ROUTERTABLE_H_INCLUDED

class RouterTable     //路由表的节点
{
public:
  int D_IP[3];
  int NEXT_IP[3];
  int length;
  RouterTable *next;
  RouterTable(int *dIP,int *nIP,int len,RouterTable* n)
  {
      for(,i<4,i++)
      {
          D_IP[i]=dIP;
          NEXT_IP[i]=nIP;
      }
      length=len;
      RouterTable*n=RouterTable*next;
  }
} //边类

#endif
