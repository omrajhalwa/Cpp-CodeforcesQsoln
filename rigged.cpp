
#include<bits/stdc++.h>
using namespace std;
#define int long long
int mod=1e9+7;
signed main(){
int t;cin>>t;

while(t--){
int n;
cin>>n;
vector<pair<int,int>>v;
map<pair<int,int>,int>mp;
for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    v.push_back({x,y});
    mp[{x,y}]++;
}

int a,b;
a=v[0].first;
b=v[0].second;
bool give=true;
sort(v.begin(),v.end());
for(int i=n-1;i>=0;i--){
    if(v[i].first>=a&&v[i].second>b){
        give=false;
    }else if(v[i].first==a&&v[i].second==b&&mp[{a,b}]>1){
        give=false;
    }
}


if(give){
cout<<a<<endl;
}else{
    cout<<-1<<endl;
}


}}