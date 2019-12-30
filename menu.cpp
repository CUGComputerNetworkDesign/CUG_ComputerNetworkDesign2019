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
        cout<<"     �����빦�ܣ�"<<endl;
        cout<<" 1.����·�ɺ���ʾ·�ɱ�"<<endl;
        cout<<" 2.ɾ��һ����"<<endl;
        cout<<" 3.����һ����"<<endl;
        cout<<" 4.ɾ��һ������"<<endl;
        cout<<" 5.����һ������"<<endl;
        cout<<" 6.�˳�"<<endl;
    cout<<"########################\n"<<endl;
        cin>>i;
        switch(i){
            case 1:{
                topo.Rip();
                int ip[4];
                char dot;
                cout<<"������·����IP:"<<endl;
                cin >> ip[0] >> dot >> ip[1] >> dot >> ip[2] >> dot >> ip[3];
                //cout << ip[0] << ip[1] << ip[2] << ip[3] << endl;
                if(!topo.PrintRouter(ip))
                    cout<<"�޴�·����!"<<endl;
                getchar();
                break;
            }
            case 2:{
                char dot;
                int ip1[4];
                int ip2[4];
                cout<<"ɾ��һ���ߣ�����������˵�·����IP��ַ��"<<endl;
                cout << "IP1:";
                cin >> ip1[0] >> dot >> ip1[1] >> dot >> ip1[2] >> dot >> ip1[3];
                cout << "IP2:";
                cin >> ip2[0] >> dot >> ip2[1] >> dot >> ip2[2] >> dot >> ip2[3];
                if(topo.DeleteLine(ip1,ip2))
                    cout << "ɾ���ɹ���" << endl;
                else
                    cout << "ɾ��ʧ�ܣ�" << endl;
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
                cout<<"����һ���ߣ�����������˵�·������IP��ַ��"<<endl;
                cout << "IP1:";
                cin >> ip1[0] >> dot >> ip1[1] >> dot >> ip1[2] >> dot >> ip1[3];
                cout << "IP2:";
                cin >> ip2[0] >> dot >> ip2[1] >> dot >> ip2[2] >> dot >> ip2[3];
                cout << "�����������ߵ�Ȩ�أ�";
                cin >> weight;
                if(topo.Insert(ip1,ip2,weight))
                    cout << "����ɹ���" << endl;
                else cout<<"����ʧ��!"<<endl;
                getchar();
                break;
            }
            case 4:{
                char dot;
                int ip[4];
                cout<<"ɾ��һ��·������"<<endl;
                cin >> ip[0] >> dot >> ip[1] >> dot >> ip[2] >> dot >> ip[3];
                if(topo.DeleteRouter(ip)){
                    cout << "ɾ���ɹ���" << endl;
                }
                else{
                    cout << "ɾ��ʧ�ܣ�" << endl;
                }
                topo.Rip();
                getchar();
                break;
            }
            case 5:{
                topo.Rip();
                int ip[4];
                char dot;
                cout<<"���һ��·����,������IP��ַ��"<<endl;
                cin >> ip[0] >> dot >> ip[1] >> dot >> ip[2] >> dot >> ip[3];
                if(topo.NewRouter(ip)){
                    cout << "��ӳɹ�" << endl;
                }
                else{
                    cout << "���ʧ��" << endl;
                }
                getchar();
                break;
            }
            case 6:{
                cout << "�˳�����" << endl;
                exit(0);
                break;
            }
            default:{
                cout << "��������ȷ������" << endl;
                getchar();
                break;
            }
        }
	}

    system("cls");
    fflush();
    cout<<"��h��"<<endl;
}
