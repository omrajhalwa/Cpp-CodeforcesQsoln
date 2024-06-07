#include<bits/stdc++.h>
using namespace std;
#define int long long
// jai shree ram......
// jai bajrangbali....





signed main(){

int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n);
map<int,int>mp;
for(int &x:v){
    cin>>x;
    mp[x]++;
}
sort(v.begin(),v.end());
int ans=0;int cnt=0;
bool give=true;
int i=0;
for( i=0;i<=n;i++){
    
    if(mp[i]>=1){
        
     
     ans+=(mp[i]-1)*(i+1);
      ans+=i;
     if(mp[i]==1){
        break;
     }
        
    }else{
       
        break;
    }
}


cout<<ans<<endl;
}
}