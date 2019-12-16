#ifndef TOPO_H
#define TOPO_H
#include"Table.h"
#include"RTable.h"
#include"Line.h"
#include"Router.h"

class Topo
{
    public:
        Table*head;
        Topo();
        virtual ~Topo();
        bool Insert(int *R1,int *R2,int weight);  //����
        bool DeleteRouter(int *R);               //ɾ��·����
        bool DeleteLine(int *R1,int *R2);         //ɾ��·��
        void Rip();                             //����·�ɱ�
    protected:

    private:
};

#endif // TOPO_H
