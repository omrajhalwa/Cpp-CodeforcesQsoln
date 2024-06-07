#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){

int t;cin>>t;
while(t--){
int n;cin>>n;

if(n==1){cout<<1<<endl;}
else if(n%2!=0){cout<<-1<<endl;}
else{
int a=n-1,b=n;
while(a>0){
cout<<a<<" "<<b<<" ";
a-=2;b-=2;
}

cout<<endl;
}
}
}