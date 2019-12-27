#include"Topo.h"
Topo::Topo(){
    head = new Table;
  //  cout<<"构造函数"<<endl;
    string filename1="node.txt";
    routerFile(filename1);
    string filename2="network.txt";
    networkFile(filename2);
}
