#include"Topo.h"
#include"Table.h"
extern bool IPcmp(int *ip1,int *ip2);
bool Topo::Insert(int *ip1,int *ip2,int weight,bool Double){
    Table* ptr = head;
    for(ptr = head;ptr != nullptr;ptr = ptr->next){   //�ҵ�·����
        if(IPcmp(ip1,ptr->data->RouterIP)){
            break;
        }
    }
    if(ptr != nullptr){
        ptr->data->BuildLine(ip2,weight);    //������
    }
    else if(ptr == nullptr){                //���������·�������򴴽�
        head = new Table(ip1,head);
        head->data->BuildLine(ip2,weight);
        ptr=head;
        reRTable();
    }
    if(Double){
        for(ptr = head;ptr != nullptr;ptr = ptr->next){
            if(IPcmp(ip2,ptr->data->RouterIP)){
                break;
            }
        }
        if(ptr != nullptr){
            ptr->data->BuildLine(ip1,weight);
        }
        else if(ptr == nullptr){
            head = new Table(ip2,head);
            head->data->BuildLine(ip1,weight);
        }
    }
}
