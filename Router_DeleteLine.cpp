#include"Router.h"

  bool DeleteLine(int *IP)               //É¾³ıÒ»Ìõ±ß
  {
      Line *p=LineHead->next,*p1=LineHead;
      while(p!=NULL)
      {
          if(p->IP2[0]==IP[0]&&p->IP2[1]==IP[1]&&p->IP2[2]==IP[2]&&p->IP2[3]==IP[3])
           {
               Line*pp=p->next;
               p1->next=pp;
               delete p;
               return true;
           }
          p1=p;  //Ôİ´æ
          p=p->next;
      }
      return false;
  }
