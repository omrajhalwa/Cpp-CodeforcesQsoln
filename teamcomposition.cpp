#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int a,b,c;
cin>>a>>b;
c=(a+b)/4;
int x;
x=min(a,b);
if(c<x){
    cout<<c<<endl;
}else{
    cout<<x<<endl;
}

}





}