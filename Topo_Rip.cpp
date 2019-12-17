#include"Topo.h"
bool Topo::Rip(){
extern bool IPcmp(int *ip1,int ip2);
    Table *ptr = head;
    bool sign = true;
    while(sign){
        sign = false;
        for(ptr = head;ptr != nullptr;ptr = ptr->next){
            Line *temp = ptr->data->LineHead;
            Table *ptr2 = head;
            for(;ptr2 != nullptr;ptr2 = ptr2->next){
                if(IPcmp(ptr2->data->RouterIP,temp->IP2)){
                    sign = sign || ptr2->UpdateRtable(ptr->data->RouterIP,ptr->data->RTableHead);
                }
            }
        }
    }

}
