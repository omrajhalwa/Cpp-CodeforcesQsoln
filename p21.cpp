#include<iostream>
using namespace std;

int main(){
    int n,m,a,b,k;
    int c,d,p;
cin>>n>>m>>a>>b;
k=n/m;


c=k*b+(n-k*m)*a;
p=k*b+b;
d=n*a;
if(c<p&&c<d){
cout<<c;
}else if(p<d){
    cout<<p;
}else{cout<<d;}


}