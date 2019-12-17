#ifndef LINE_H_INCLUDED
#define LINE_H_INCLUDED
//*Line类作为

class Line
{
    int IP1[4];
    int IP2[4];
    int weight;
    Line*next;
    Line(int *ip1,int *ip2,int weight1)
    {
      for(,i<4,i++)
      {
          IP1=ip1;
          IP2=ip2;
      }
        weight=weight1;
        Line*next=NULL;
    }
};


#endif // LINE_H_INCLUDED
