#include"Topo.h"
bool Topo::DeleteLine(int *R1,int *R2){
    Table* ptr1 = head;
    Table* ptr2 = head;
    for(ptr1 = head;ptr1 != nullptr;ptr1 = ptr1->next){
        if(IPcmp(ip1,ptr1->data->RouterIP)){
            break;
        }
    }
    for(ptr2 = head;ptr2 != nullptr;ptr2 = ptr2->next){
        if(IPcmp(ip2,ptr2->data->RouterIP)){
            break;
        }
    }
    if(ptr1 != nullptr && ptr2 != false){
        ptr1->DeleteLine(R2);
        ptr2->DeleteLine(R1);
        return true;
    }
    else{
        return false;
    }
}
