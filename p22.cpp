#include<iostream>
using namespace std;

int main(){ int n,p,q,r,d;
cin>>n;
if(n<0){
    p=n%10;
    q=n/10;
    r=q%10;
    if(p<r){
        cout<<q;
    }else{
        cout<<q-r+p;
    }
}else{
    cout<<n;
}





}