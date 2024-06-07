#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
    int t;cin>>t;
    while(t--){
int n;
cin>>n;
vector<int>v(n);
int product=1;int zero=0;
for(int i=0;i<n;i++){
    cin>>v[i];
if(v[i]==0){
    zero++;
    }
    if(v[i]!=0)product*=v[i];
    
}


if(zero>1){
    cout<<0<<endl;
}else if(zero==1){
    cout<<product<<endl;
}else{
int mx=product;
for(int i=0;i<n;i++){
    product/=v[i];
    product*=(v[i]+1);
    mx=max(mx,product);
    product/=(v[i]+1);
    product*=(v[i]);
}

cout<<mx<<endl;
}
}
}