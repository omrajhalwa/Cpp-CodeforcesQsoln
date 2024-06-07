#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;cin>>t;
while(t--){
int n,m,d;
cin>>n>>m>>d;
vector<int>v(n+1);
vector<int>c;
map<int,int>mp;
for(int i=1;i<=n;i++){
    cin>>v[i];
    mp[v[i]]=i;
}
for(int i=1;i<=m;i++){
int k;cin>>k;
c.push_back(mp[k]);
}
int mn1=INT64_MAX;
int mn2=INT64_MAX;
for(int i=0;i<c.size()-1;i++){

if(c[i]>c[i+1]){
    mn1=0;
}else{
    if(mn1>0){
    mn1=min(mn1,c[i+1]-c[i]);}
}
if(c[i]<c[i+1]){
    if(c[i]+d>=c[i+1]){
        int p=c[i]+d;
        if(mn2>0){

            if(p-c[i+1]+1<=n-c[i+1]+c[i]-1){
        mn2=min(mn2,p-c[i+1]+1);}
        }
    }else{
        mn2=0;
    }
}

}
int ans;
ans=min(mn1,mn2);
cout<<ans<<endl;

}
}