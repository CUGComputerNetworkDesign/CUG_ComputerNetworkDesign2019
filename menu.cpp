#include<iostream>
#include<cstdlib>
#include<cstdio>
#include"Topo.h"
using namespace std;
void menu(void)
{
    Topo topo;
	int i = 0;
	while(1){
        cout<<endl;
        cout<<"########################"<<endl;
        cout<<"     请输入功能："<<endl;
        cout<<" 1.输入路由号显示路由表"<<endl;
        cout<<" 2.删除一条边"<<endl;
        cout<<" 3.插入一条边"<<endl;
        cout<<" 4.删除一个顶点"<<endl;
        cout<<" 5.增加一个顶点"<<endl;
        cout<<" 6.退出"<<endl;
    cout<<"########################\n"<<endl;
        cin>>i;
        switch(i){
            case 1:{
                topo.Rip();
                int ip[4];
                char dot;
                cout<<"请输入路由器IP:"<<endl;
                cin >> ip[0] >> dot >> ip[1] >> dot >> ip[2] >> dot >> ip[3];
                //cout << ip[0] << ip[1] << ip[2] << ip[3] << endl;
                if(!topo.PrintRouter(ip))
                    cout<<"无此路由器!"<<endl;
                getchar();
                break;
            }
            case 2:{
                char dot;
                int ip1[4];
                int ip2[4];
                cout<<"删除一条边，请输入边两端的路由器IP地址："<<endl;
                cout << "IP1:";
                cin >> ip1[0] >> dot >> ip1[1] >> dot >> ip1[2] >> dot >> ip1[3];
                cout << "IP2:";
                cin >> ip2[0] >> dot >> ip2[1] >> dot >> ip2[2] >> dot >> ip2[3];
                if(topo.DeleteLine(ip1,ip2))
                    cout << "删除成功！" << endl;
                else
                    cout << "删除失败！" << endl;
                topo.Rip();
                getchar();
                break;
            }
            case 3:{
                topo.Rip();
                int ip1[4];
                int ip2[4];
                char dot;
                int weight = 0;
                cout<<"插入一条边，请输入边两端的路由器的IP地址："<<endl;
                cout << "IP1:";
                cin >> ip1[0] >> dot >> ip1[1] >> dot >> ip1[2] >> dot >> ip1[3];
                cout << "IP2:";
                cin >> ip2[0] >> dot >> ip2[1] >> dot >> ip2[2] >> dot >> ip2[3];
                cout << "请输入这条边的权重：";
                cin >> weight;
                if(topo.Insert(ip1,ip2,weight))
                    cout << "插入成功！" << endl;
                else cout<<"插入失败!"<<endl;
                getchar();
                break;
            }
            case 4:{
                char dot;
                int ip[4];
                cout<<"删除一个路由器："<<endl;
                cin >> ip[0] >> dot >> ip[1] >> dot >> ip[2] >> dot >> ip[3];
                if(topo.DeleteRouter(ip)){
                    cout << "删除成功！" << endl;
                }
                else{
                    cout << "删除失败！" << endl;
                }
                topo.Rip();
                getchar();
                break;
            }
            case 5:{
                topo.Rip();
                int ip[4];
                char dot;
                cout<<"添加一个路由器,请输入IP地址："<<endl;
                cin >> ip[0] >> dot >> ip[1] >> dot >> ip[2] >> dot >> ip[3];
                if(topo.NewRouter(ip)){
                    cout << "添加成功" << endl;
                }
                else{
                    cout << "添加失败" << endl;
                }
            getchar();
                break;
            }
            case 6:{
                cout << "退出程序！" << endl;
                exit(0);
                break;
            }
            default:{
                cout << "请输入正确的数字" << endl;
                getchar();
                break;
            }
        }
	}

    system("cls");
    cout<<"李玥瑶"<<endl;
}
