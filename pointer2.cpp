#include<iostream>
using namespace std;

int main(){

int *p=new int [5];
p[0]=12;
p[1]=13;
p[2]=14;
p[3]=15;
p[4]=16;

cout<<p[1]<<endl;
  

  delete []p;
p=nullptr;
cout<<p[4]<<endl;
    return 0;
}