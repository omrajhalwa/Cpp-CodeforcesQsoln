#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n);
map<int,int>m;
for(int i=0;i<n;i++){
    cin>>v[i];
    m[v[i]]++;
}
map<int,int>mp;
int k=0,ans=0,ans1=0;
for(auto it:m){
    int p=it.first;
    for(int j=p;j<=n;j+=p){
    mp[j]+=it.second;
        if(k<mp[j]){
            ans=mp[j];
            k=mp[j];
        }
    }
    
}
cout<<ans<<endl;
}
}