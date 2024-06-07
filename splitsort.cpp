#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
    int t;cin>>t;
    while(t--){
int n;cin>>n;
map<int,int>mp;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]=i;
}
int ans=0;
for(int i=1;i<n;i++){
    if(mp[i]>mp[i+1])ans++;
}
cout<<ans<<endl;

}
}