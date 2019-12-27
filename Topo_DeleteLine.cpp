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
        if(!ptr1->data->DeleteLine(ptr2->data->RouterIP))  //删除边
            return false;
        if(!ptr2->data->DeleteLine(ptr1->data->RouterIP))
            return false;
        reRTable();         //重构路由表

        return true;
    }
    else
        return false;
}
