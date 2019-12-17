#ifndef LINE_H_INCLUDED
#define LINE_H_INCLUDED
//*Line类作为

class Line
{
    int IP1[4]; //上一个路由表，链表头
    int IP2[4]; //下一个路由表，跟这个路由器相连的IP
    int weight; //权重
    Line*next;//链表的next指针
    Line(int *ip1,int *ip2,int weight1)
    {
      for(;i<4;i++)//循环赋值初始化
      {
          IP1=ip1;
          IP2=ip2;
      }
        weight=weight1;
        Line*next=NULL;
    }
};


#endif // LINE_H_INCLUDED
