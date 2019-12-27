#include"Topo.h"
void Topo::networkFile(string filename)//从文件读取边信息
{
    Table*tp=head;
    Table*tp1=NULL;
    Line*lp=NULL;
    ifstream in(filename);
    if(in)
    {
      //  cout<<"file2open!"<<endl;
        while(!in.eof())
        {
            int ip1[4],ip2[4],weight;
            char ch;
            in>>ip1[0]>>ch>>ip1[1]>>ch>>ip1[2]>>ch>>ip1[3];
            in>>ip2[0]>>ch>>ip2[1]>>ch>>ip2[2]>>ch>>ip2[3];
            in>>weight;
         //   cout<<weight<<endl;
            Insert(ip1,ip2,weight,false);
           // cout<<"Insertover!"<<endl;
        }
    }
    in.close();

}
