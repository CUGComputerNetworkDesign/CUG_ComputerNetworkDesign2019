#include"Topo.h"
extern bool IPcmp(int *ip1,int *ip2);
bool Topo::Rip(){

    Table *ptr = head;
    bool sign = true;
    while(sign){
        sign = false;
        for(ptr = head;ptr != nullptr;ptr = ptr->next){                     //找到一个路由器ptr
            Line *temp = ptr->data->LineHead;
            while(temp != nullptr){                                         //从ptr的路由表中找到某个相邻的路由器ptr2
                for(Table *ptr2 = head;ptr2 != nullptr;ptr2 = ptr2->next){  //查找路由器Y
                    if(IPcmp(ptr2->data->RouterIP,temp->IP2)){              //如果是，就交换信息。
                        sign = (sign || ptr->data->UpdateRtable(ptr2->data->RouterIP,ptr2->data->RTableHead));
                    }
                }
                temp = temp->next;
            }
        }
    }

}
