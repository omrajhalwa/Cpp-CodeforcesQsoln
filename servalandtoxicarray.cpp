#include<bits/stdc++.h>
using namespace std;
#define int long long

int nc2(int n){
    return n*(n-1)/2;
}


signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
int m;cin>>m;
vector<int>v(n+1);map<int,int>mp;
for(int i=1;i<=n;i++){
cin>>v[i];
mp[v[i]]=m+1;
}
     
for(int i=1;i<=m;i++){
int a,b;cin>>a>>b;
mp[b]+=m+1-i;
mp[v[a]]-=m+1-i;
v[a]=b;


}
int ans=0;
for(auto it:mp){
//cout<<it.first<<" "<<it.second<<endl;
ans+=nc2(it.second)+(m+1-it.second)*it.second;
}
//unable to solve
cout<<ans<<endl;
}
}