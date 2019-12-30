#ifndef LINE_H_INCLUDED
#define LINE_H_INCLUDED
class Line
{
public:
    int IP1[4]; //上一个路由表，链表头
    int IP2[4]; //下一个路由表，跟这个路由器相连的IP
    int weight; //权重
    Line*next;//链表的next指针
    Line(int *ip1,int *ip2,int weight1);
    Line(){next=nullptr;}
};


#endif // LINE_H_INCLUDED
