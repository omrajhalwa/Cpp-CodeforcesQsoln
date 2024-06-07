#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(false); cin.tie(0);

int t;cin>>t;
while(t--){
int n;cin>>n;int m;cin>>m;
vector<int>v(m);
for(int i=0;i<m;i++){
cin>>v[i];
}
map<int,int>mp;
map<int,int>m1;
map<int,int>ans;
int j,k;
for( k=n,j=1;k>=1&&j<=n;k--,j++){
    mp[j]=k;
    m1[k]=j;
}

for(int i=0;i<m;i++){
if(m1[v[i]]!=0){
    mp.erase(m1[v[i]]);
m1[v[i]]=j;
mp[j]=v[i];
j++;
}else{

    auto it=mp.begin();
    ans[it->second]=i+1;
    mp.erase(it->first);
    m1[v[i]]=j;
    mp[j]=v[i];j++;
}
}



vector<int>v1(n+m+101,-1);

for(auto it:ans){
    v1[it.first]=it.second;
}
for(int i=1;i<=n;i++){cout<<v1[i]<<" ";}cout<<endl;
}


}
