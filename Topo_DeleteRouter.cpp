#include"Topo.h"
extern bool IPcmp(int *ip1,int ip2);
Topo::DeleteRouter(int *ip){
    Table* ptr = head;
    Table* last = nullptr;
    Table* temp = head;
    Line* ptr2 = nullptr;
    for(ptr = head;ptr != nullptr;ptr = ptr->next){
        if(IPcmp(ip,ptr->data->RouterIP)){
            break;
        }
        if(last == nullptr){
            last = head;
        }
        else{
            last = last->next;
        }
    }
    ptr2 = ptr->date->LineHead;
    for(temp = head;temp != nullptr;temp = temp->next){
        if(IPcmp(temp->data->RouterIP,ptr2 = ptr2->next)){
            temp->data->DeleteLine();
            temp = head;
        }
    }
    if(last == nullptr){
        head = head->next;
    }
    else{
        last->next = ptr->next;
    }
    delete ptr;
}
