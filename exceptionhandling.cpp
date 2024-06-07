#include<bits/stdc++.h>
using namespace std;

int main(){


int a=10,b=0,c;

try{

    if(b==0) throw 101;
    c=a/b;
    cout<<c;
}
catch(int e){
    cout<<"division by zero"<<e;
}



}