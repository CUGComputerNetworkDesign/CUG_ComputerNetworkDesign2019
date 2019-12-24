#ifndef TOPO_H_INCLUDED
#define TOPO_H_INCLUDED
#include"Table.h"
#include"RouterTable.h"
#include"Line.h"
#include"Router.h"
#include<iostream>
#include<fstream>
using namespace std;
class Topo
{
    public:
        Table*head;
        Topo();
        void routerFile(string filename);//���ļ���ȡ·������Ϣ���г�ʼ��
        void networkFile(string filename);//���ļ���ȡ����Ϣ
        bool Insert(int *R1,int *R2,int weight,bool Double = true); //����
        bool DeleteRouter(int *R);               //ɾ��·����
        bool DeleteLine(int *R1,int *R2);        //ɾ��·��
        bool NewRouter(int *IP);
        bool PrintRouter(int *Ip);
        bool Rip();                              //����·�ɱ�
        void deleteRTable();    //ɾ��·�ɱ�
        void reRTable();        //��ʼ��·�ɱ�
};

#endif // TOPO_H
