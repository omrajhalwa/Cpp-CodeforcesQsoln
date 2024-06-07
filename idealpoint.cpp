#include<bits/stdc++.h>
using namespace std;

int main(){

int t;cin>>t;while(t--){
int n,k;


cin>>n>>k;


vector<pair<int,int>>v;
for(int i=0;i<n;i++){
    int a,b;cin>>a>>b;
    v.push_back(make_pair(a,b));
}
map<int,int>mp;
for(int i=0;i<n;i++){

if(v[i].first<=k&&k<=v[i].second){
for(int j=v[i].first;j<=v[i].second;j++){
    mp[j]++;
}
}

}
int p=mp[k],b=0,mx=0;
for(auto it:mp){
    mx=max(mx,it.second);
    if(it.second==p){
        b++;
    }
}

if(mx==p&&b==1&&mx!=0){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}
}