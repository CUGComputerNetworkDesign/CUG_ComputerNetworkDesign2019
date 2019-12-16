#ifndef TOPO_H
#define TOPO_H

class RouterTable     //路由表的节点
{
public:
  char IP[10];
  int length;
  RouterTable *next;
  RouterTable(char ip[10],int len,RouterTable* n);
} //边类

#endif
