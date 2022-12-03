#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
int a,b,c,n,m;
cin>>a>>b>>c;
cin>>n>>m;




int diff=abs(n-m);
if(diff==0){cout<<0<<endl;
    }else if(diff==c){
    cout<<1<<endl;
}else if(diff<c&&abs(m+c)<=b){
cout<<2<<endl;
}else if(diff<c&&abs(m-c)>=a){
cout<<3<<endl;
}else{
    cout<<-1<<endl;
}














}







}