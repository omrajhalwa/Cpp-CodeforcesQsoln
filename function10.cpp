#include<iostream>
using namespace std;
int * fun(int size){
int*p=new int[size];
for(int i=0;i<size;i++){
    p[i]=i+1;
}
cout<<p<<endl;
return p;
}




int main(){
int*ptr=fun(5);
cout<<ptr<<endl;
}