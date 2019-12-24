#include"Topo.h"
#include<iostream>
using namespace std;
extern bool IPcmp(int *ip1,int *ip2);
bool Topo::PrintRouter(int *Ip){
    Table* ptr = head;
    for(ptr = head;ptr != nullptr;ptr = ptr->next){
        if(IPcmp(Ip,ptr->data->RouterIP)){
            //cout << ptr->data->RouterIP[0] << endl;
            break;
        }
    }
    if(ptr != nullptr){
        if(ptr->data->PrintRtable()){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}
