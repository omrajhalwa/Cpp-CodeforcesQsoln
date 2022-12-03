#include<iostream>
using namespace std;

int main(){

int b,p,n,c,m,r,k;
cin>>n>>m;
if(n%2==0){
    p=n/2;
}else{
    p=(n/2)+1;
}
while(p%m!=0&&p<=n){
    
        p++;
    }
if(p%m==0&&n>=m){
    cout<<p;
}else{
    cout<<-1;
}
}