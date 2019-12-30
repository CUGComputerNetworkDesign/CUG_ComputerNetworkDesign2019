#include"Router.h"
#include"RouterTable.h"
#include<iostream>
using namespace std;
bool Router::UpdateRtable(int *IP,RouterTable* head){ //更新路由表
    //cout << IP[0] << IP[1] << IP[2] << IP[3] << endl;
    RouterTable*p1 = RTableHead;//自己的路由表
    RouterTable*p2 = head;      //传进来的路由表
    Line*p=LineHead;            //自己的Line表
    int weight=0;
    bool judge = false;//判断是否进行过更新
    while(p!=nullptr)   //计算权值
    {
        if(p->IP2[0]==IP[0]&&p->IP2[1]==IP[1]&&p->IP2[2]==IP[2]&&p->IP2[3]==IP[3]){
            weight=p->weight;
        }
        p=p->next;
    }
    while(p2!=nullptr)
    {
        p1 = RTableHead;
        while(p1!=nullptr) //遍历自己的路由表
        {
            if(p1->D_IP[0]==p2->D_IP[0]&&p1->D_IP[1]==p2->D_IP[1]
               &&p1->D_IP[2]==p2->D_IP[2]&&p1->D_IP[3]==p2->D_IP[3])//找到目的地址相同的行
                {
                 //   cout<<"D_IP:"<<p1->D_IP[0]<<p2->D_IP[0];
                 //   cout<<"old:"<<p1->length<<"new:"<<p2->length+weight<<endl;
                    if(p1->length>(p2->length+weight)) //新传递的路径短
                    {
                        p1->length=p2->length+weight;// 修改路由表
                        for(int i=0;i<4;i++)
                           p1->NEXT_IP[i]=IP[i];
                        judge=true;  //修改标志
                        //cout<<"change"<<endl;
                    }
                    break;
                }
            else p1=p1->next;
        }
        if(p1==nullptr){   //在路由表中添加新路线
            RouterTable*rtp=RTableHead;//将新添加的边加入路由表
            RouterTable*rtpp=new RouterTable(p2->D_IP,IP,p2->length+weight,rtp);
            RTableHead=rtpp;
            judge=true;
            //cout<<"add"<<rtpp->D_IP[0]<<endl;
        }
        p2=p2->next; //寻找下一行
    }
    //cout<<"no"<<endl;
    return judge;
}
