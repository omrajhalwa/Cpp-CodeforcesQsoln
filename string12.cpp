#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string str="hello";
    cout<<str.capacity()<<endl;

    str.append("world soerheo9yfwsefyhgrehgoey");
    cout<<str.capacity()<<endl;
    cout<<str<<endl;
   



    return 0;
}