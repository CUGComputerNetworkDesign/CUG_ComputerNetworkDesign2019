#include"Topo.h"

void Topo::routerFile(string filename)//���ļ���ȡ·������Ϣ���г�ʼ��
{
    Table*tp=head;
    Table*tp1=NULL;
    int num;
    ifstream in(filename);
    if(in)
    {
      //  cout<<"fileopen!"<<endl;
        while(!in.eof())
        {
            while(in>>num)
            {
               // cout<<num<<endl;
                int ip[4];char ch;
                in>>ip[0]>>ch>>ip[1]>>ch>>ip[2]>>ch>>ip[3];
                tp1=new Table(ip,NULL);
                tp->next=tp1;
                tp=tp1;
            }
        }
    }
    in.close();
    tp=head;
    head=head->next;
    delete tp;
}
