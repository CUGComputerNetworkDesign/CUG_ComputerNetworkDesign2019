#include"Topo.h"
extern bool IPcmp(int *ip1,int *ip2);
bool Topo::DeleteLine(int *IP1,int *IP2){

    Table* ptr1 = head;
    Table* ptr2 = head;

    for(ptr1 = head;ptr1 != nullptr;ptr1 = ptr1->next)   //找路由器结点
        if(IPcmp(IP1,ptr1->data->RouterIP))
            break;

    for(ptr2 = head;ptr2 != nullptr;ptr2 = ptr2->next)  //找路由器结点
        if(IPcmp(IP2,ptr2->data->RouterIP))
            break;
  //  cout << "ptr1->data->RouterIP[0]"<<ptr1->data->RouterIP[0] << endl;
  //  cout <<"ptr2->data->RouterIP[0]"<< ptr2->data->RouterIP[0] << endl;
    if(ptr1 != nullptr && ptr2 != nullptr)
    {
      //  cout<<"***************"<<IP2[0]<<endl;
        ptr1->data->DeleteLine(ptr2->data->RouterIP);   //删除边
      //  cout<<"***************"<<IP1[0]<<endl;
        ptr2->data->DeleteLine(ptr1->data->RouterIP);
        reRTable();         //重构路由表


         Table*tp=head;
    Table*tp1=NULL;
    Line*lp=NULL;
       while(tp!=NULL)
    {
        for(int i=0;i<4;i++)
         //   cout<<tp->data->RouterIP[i];
       // cout<<"  :"<<endl;
        lp=tp->data->LineHead;
        while(lp!=NULL)
        {
            for(int i=0;i<4;i++)// cout<<lp->IP2[i]<<" ";
         //   cout<<lp->weight<<endl;
            lp=lp->next;
        }
        tp=tp->next;
    }


        return true;
    }
    else
        return false;
}
