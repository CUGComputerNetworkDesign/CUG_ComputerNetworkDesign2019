#ifndef TOPO_H
#define TOPO_H
#include"Table.h"
#include"RTable.h"
#include"Line.h"
#include"Router.h"

class Topo
{
    public:
        Topo();
        virtual ~Topo();
        bool Insert(int R1,int R2,int weight);//����
        bool R_out(int R);    //ɾ��·����
        bool L_out(int R1,int R2);   //ɾ��·��
        void Rip();  //����·�ɱ�
        Table*head;

    protected:

    private:
};

#endif // TOPO_H
