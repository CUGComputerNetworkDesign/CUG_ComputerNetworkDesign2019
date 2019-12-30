#include"Table.h"
Table::Table(int * ip,Table* nex){
    data = new Router(ip);
    next = nex;
}
