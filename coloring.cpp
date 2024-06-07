#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
int t;
cin>>t;
while(t--){
int n,m,k,o;
cin>>n>>m>>k;
vector<int>v(m);
int mx=0;
for(int i=0;i<m;i++){cin>>v[i];mx=max(mx,v[i]);}
int cnt=0;
for(int i=0;i<m;i++){
    if(v[i]==mx)cnt++;
}

if(n>=(mx*k-(k-1)+(cnt-1))){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}



}}