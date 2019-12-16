#ifndef LINE_H_INCLUDED
#define LINE_H_INCLUDED
//*Line类作为

class Line
{
    int D_IP[3];
    int NEXT_IP[3];
    int weight;
    Line*next;
    Line(int *dIP,int *nIP,int weight1)
    {
      for(,i<4,i++)
      {
          D_IP[i]=dIP;
          NEXT_IP[i]=nIP;
      }
        weight=weight1;
        Line*next=NULL;
    }
};


#endif // LINE_H_INCLUDED
