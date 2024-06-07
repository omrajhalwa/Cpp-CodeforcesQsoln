#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;cin>>t;
    while(t--){
int n,x;cin>>n>>x;
vector<int>v(n);
map<int,int>mp;
for(int i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]++;
}
sort(v.begin(),v.end());
int ans=0;
for(int i=0;i<n;i++){
    if(mp[v[i]]>0){
    if(mp[v[i]*x]>0){
       // cout<<mp[10];
        mp[v[i]*x]--;
        mp[v[i]]--;
        if(mp[v[i]*x]==0){
            mp.erase(v[i]*x);
        }
    }else{
       mp[v[i]]--;
     ans++;
    }
    if(mp[v[i]]==0){
            mp.erase(v[i]);
        }
    
}
}
cout<<ans<<endl;


}

}