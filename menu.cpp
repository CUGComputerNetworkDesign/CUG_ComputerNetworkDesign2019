#include<iostream>
#include<dos.h> 
using namespace std;

//#include"menu.h"
int menu(void)
{
	int i=1;
	cout<<"�����빦�ܣ�"<<endl;
	cout<<"1.����·�ɺ���ʾ·�ɱ�"<<endl;
	cout<<"2.ɾ��һ����"<<endl;
	cout<<"3.����һ����"<<endl;
	cout<<"4.ɾ��һ������"<<endl;
	cout<<"5.����һ������"<<endl;
	cout<<"6.�˳�"<<endl;	
	while(i)
	{

		cin>>i;
		if(i==1)
		{
			cout<<"������·�ɺ�"<<endl; 
		}
		if(i==2)
		{
			cout<<"ɾ��һ����"<<endl; 
	    	bool DeleteLine(int *IP);                //ɾ��һ���� 
		}
		if(i==3)
		{
			cout<<"����һ����"<<endl;
			bool Insert(int *R1,int *R2,int weight);  //����һ���� 
		}
		if(i==4)
		{
			cout<<"ɾ��һ������"<<endl;
			bool DeleteRouter(int *R);               //ɾ��һ������ 
		}
		if(i==5)
		{
			cout<<"����һ������"<<endl;
		}
		if(i==6)
		{
			i=0; 
			break;
		}  	
	}
}

//int main(void)
//{
//	menu();
//}
