#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
//dada pawansut hanuman ji ki jay

int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
vector<int>v(n+3);

map<int,pair<int,int>>mp;
for(int i=1;i<=n;i++){
    cin>>v[i];
    int mn,mx;
    if(mp[v[i]].first==0&&mp[v[i]].second==0){
    mp[v[i]].first=i;mp[v[i]].second=i;}else{
        mp[v[i]].first=min(mp[v[i]].second,min(i,mp[v[i]].first));
        mp[v[i]].second=max(mp[v[i]].second,max(i,mp[v[i]].first));
    }
}


for(int i=0;i<k;i++){
int a,b;
cin>>a>>b;

if(mp[a].first<mp[b].second&&mp[a].first!=0&&mp[b].second!=0){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}



}

}