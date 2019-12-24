#include"Topo.h"
bool Topo::NewRouter(int *IP){
    head = new Table(IP,head);
    return true;
}
