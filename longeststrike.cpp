#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    
int n,k;cin>>n>>k;
vector<int>v(n);
map<int,int>mp;
for(int &x:v){
    cin>>x;
    mp[x]++;
}
set<int>s;
for(int i=0;i<n;i++){
    if(mp[v[i]]>=k){
        s.insert(v[i]);
    }
}
vector<int>c;
for(auto it:s){
    c.push_back(it);
}
int j=0,mx=0,i=0;
if(c.size()==0){cout<<-1<<endl;
return;}
if(c.size()>0){
vector<pair<int,int>>p;
for(i=0;i<c.size()-1;i++){
if(c[i]==c[i+1]-1){
    
}else{
p.push_back({c[j],c[i]});
j=i+1;
}

}p.push_back({c[j],c[i]});
int mx=0,ans1=-1,ans2=-1;
for(auto it:p){
   
    if(it.second-it.first>=mx){
        mx=it.second-it.first;
        ans1=it.first;
        ans2=it.second;
    }
}
cout<<ans1<<" "<<ans2<<endl;
}
}
signed main(){

int t;cin>>t;
while(t--){
    solve();
}

}