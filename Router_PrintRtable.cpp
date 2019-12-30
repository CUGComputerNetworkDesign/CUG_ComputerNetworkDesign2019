#include"Router.h"
#include"cstdio"
bool Router::PrintRtable(void){
    RouterTable*rtp=RTableHead;
    printf("目的地址  下一跳   跳数\n");
    if(rtp == nullptr){
        return false;
    }
    while(rtp != nullptr)
    {
        if(rtp->D_IP[0] != 0){
            printf("%d.%d.%d.%d   %d.%d.%d.%d    %d\n",rtp->D_IP[0],rtp->D_IP[1],rtp->D_IP[2],rtp->D_IP[3],
                   rtp->NEXT_IP[0],rtp->NEXT_IP[1],rtp->NEXT_IP[2],rtp->NEXT_IP[3],rtp->length);
        }
        rtp=rtp->next;
    }
    return true;
}
