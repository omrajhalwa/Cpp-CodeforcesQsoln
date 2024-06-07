#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;

while(t--){
int a,b,k;
cin>>a>>b>>k;
vector<int>v1(k);
vector<int>v2(k);
map<pair<int,int>,int>mp;
map<int,int>m1;map<int,int>m2;
for(int &x:v1){cin>>x;}
for(int &x:v2){cin>>x;}


int ans=0;

for(int i=k-1;i>=0;i--){
    ans+=k-(i+1)-(m1[v1[i]]+m2[v2[i]]);m2[v2[i]]++;m1[v1[i]]++;
}
cout<<ans<<endl;
}
}