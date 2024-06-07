#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n),p(n);int total=0;
vector<int>pre;
for(int i=0;i<n;i++){cin>>v[i];p[i]=v[i];}
sort(p.begin(),p.end());
for(int i=0;i<n;i++){total+=p[i];pre.push_back(total);}
map<int,int>mp;
for(int i=0;i<n;i++){
    int ans=0;
    ans+=(total-pre[i])-(p[i]*(n-(i+1)))+(n-(i+1));
    ans+=((i+1)*p[i])-pre[i]+i+1;
  mp[p[i]]=ans;
}
for(auto it:v){cout<<mp[it]<<" ";}cout<<endl;}


}