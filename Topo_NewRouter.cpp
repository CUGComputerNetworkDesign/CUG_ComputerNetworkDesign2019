#include"Topo.h"
extern bool IPcmp(int *ip1,int *ip2);
bool Topo::NewRouter(int *IP){
    Table* ptr = head;
    for(;ptr!= nullptr&&!IPcmp(ptr->data->RouterIP,IP);ptr = ptr->next);
    if(ptr != nullptr)
        return false;
    head = new Table(IP,head);
    return true;
}
