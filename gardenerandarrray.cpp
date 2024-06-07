#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;

vector<vector<int>>v;
map<int,int>mp;
bool give=false;
for(int i=0;i<n;i++){
int x;cin>>x;
vector<int>c(x);
int sum=0,ans=0;

for(int j=0;j<x;j++){
cin>>c[j];
mp[c[j]]++;
}
v.push_back(c);



}

for(int i=0;i<v.size();i++){
int ans=0;
for(int j=0;j<v[i].size();j++){
if(mp[v[i][j]]>1){
    ans++;
}

}
if(ans==v[i].size()){
    give=true;
}
}

if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}

}
}