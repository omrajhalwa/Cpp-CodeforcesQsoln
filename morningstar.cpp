#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
map<pair<int,int>,int>mp;
for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    
        mp[{(a-b),1e9+1}]++;
  
         mp[{(a+b),1e9+2}]++;
  
    mp[{a,1}]++;
    mp[{b,2}]++;

}

int ans=0;
for(auto it:mp){
    int a=it.second,cnt=1;
   // cout<<a<<endl;
    
    
    ans+=a*(a-1);
    
}
cout<<ans<<endl;
}
}