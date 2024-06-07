#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
 ios::sync_with_stdio(false);
cin.tie(0);
int t;cin>>t;
while(t--){
int n;cin>>n;
map<int,int>mp;
for(int i=0;i<n;i++){
    int x;cin>>x;
mp[x]=i;
}
vector<int>v(n);int ans=0;
for(int i=0;i<n;i++){
    cin>>v[i];
}
for(int i=n-1;i>0;i--){
    if(mp[v[i]]<mp[v[i-1]]){
        ans=i;
        break;
    }
}
cout<<ans<<endl;




}
}