#include<iostream>
#include<dos.h> 
using namespace std;

//#include"menu.h"
int menu(void)
{
	int i=1;
	cout<<"请输入功能："<<endl;
	cout<<"1.输入路由号显示路由表"<<endl;
	cout<<"2.删除一条边"<<endl;
	cout<<"3.插入一条边"<<endl;
	cout<<"4.删除一个顶点"<<endl;
	cout<<"5.增加一个顶点"<<endl;
	cout<<"6.退出"<<endl;	
	while(i)
	{

		cin>>i;
		if(i==1)
		{
			cout<<"请输入路由号"<<endl; 
		}
		if(i==2)
		{
			cout<<"删除一条边"<<endl; 
	    	bool DeleteLine(int *IP);                //删除一条边 
		}
		if(i==3)
		{
			cout<<"插入一条边"<<endl;
			bool Insert(int *R1,int *R2,int weight);  //插入一条边 
		}
		if(i==4)
		{
			cout<<"删除一个顶点"<<endl;
			bool DeleteRouter(int *R);               //删除一个顶点 
		}
		if(i==5)
		{
			cout<<"插入一个顶点"<<endl;
		}
		if(i==6)
		{
			i=0; 
			break;
		}  	
	}
}
