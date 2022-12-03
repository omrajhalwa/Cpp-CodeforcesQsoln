#include<iostream>
using namespace std;

int main(){
 int x=10;
 int &y=x;
 
 int a;
 a=x;
 x=25;
 cout<<a<<"-a"<<endl;
 cout<<x<<"x"<<endl;
 cout<<&a<<"address of a"<<endl;
 cout<<&x<<"-address of x"<<endl;

    return 0;
}