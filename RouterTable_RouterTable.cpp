#include"RouterTable.h"
RouterTable::RouterTable(int *dIP,int *nIP,int len,RouterTable* n)
{
  for(int i = 0;i<4;i++)   //循环赋值初始化
  {
      D_IP[i]=dIP[i];
      NEXT_IP[i]=nIP[i];
  }
  length = len;
  next = n;
}
