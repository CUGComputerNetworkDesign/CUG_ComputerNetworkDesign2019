#include"Line.h"
Line::Line(int *ip1,int *ip2,int weight1)
{
    for(int i = 0;i<4;i++){//循环赋值初始化
          IP1[i]=ip1[i];
          IP2[i]=ip2[i];
      }
    weight = weight1;
    Line*next = nullptr;
}
