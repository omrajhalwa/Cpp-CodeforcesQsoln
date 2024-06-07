#include<bits/stdc++.h>
using namespace std;
#define int long long


int lcm(int n,int m){
    return n*m/__gcd(n,m);
}
signed main(){

int n;
cin>>n;
vector<pair<int,int>>v(n);
map<int,int>mp1;
for(int i=0;i<n;i++){
    cin>>v[i].first;
}for(int i=0;i<n;i++){
    cin>>v[i].second;
    mp1[v[i].first]=v[i].second;
}
int m;
cin>>m;
vector<pair<int,int>>c(m);
map<int,int>mp2;
for(int i=0;i<m;i++){
    cin>>c[i].first;
}for(int i=0;i<m;i++){
    cin>>c[i].second;
    mp2[c[i].first]=c[i].second;
}
bool give=true;
for(int i=0;i<m;i++){
    if(mp2[c[i].first]<=mp1[c[i].first]){
        mp1[c[i].first]-=mp2[c[i].first];
    }else{
        give=false;
    }
}
int cnt=0;
for(int i=0;i<n;i++){
    if(mp1[v[i].first]>0){
        cnt++;
    }
}

if(!give){
    cout<<0;
}else{
    int ans=1;
    for(int i=0;i<cnt;i++){
        ans=(ans*1LL*2)%(int)998244353;
    }
    cout<<ans;
}


}