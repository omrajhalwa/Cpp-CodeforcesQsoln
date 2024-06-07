#include<bits/stdc++.h>
using namespace std;


#define int long long




signed main(){

int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
vector<pair<int,int>>v(n);
for(int i=0;i<n;i++){
    cin>>v[i].first;
}
for(int i=0;i<n;i++){
    cin>>v[i].second;
}
sort(v.begin(),v.end());
vector<int>c(n);
int mn=INT64_MAX;

for(int i=n-1;i>=0;i--){
    mn=min(mn,v[i].second);
    c[i]=mn;
}
int d=k;int i=0;
while(i<n&&k>0){
    if(v[i].first>d){
        k=k-c[i];
        d+=k;
    }else{
        i++;
    }
}
if(i==n){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}
}
}