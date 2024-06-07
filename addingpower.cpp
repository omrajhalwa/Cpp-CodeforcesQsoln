#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;cin>>t;
    while(t--){
int n,k;cin>>n>>k;
vector<int>v(n);
map<int,int>mp;
for(int &x:v){cin>>x;}
bool give=true;
for(int i=0;i<n;i++){
int a=0;
if(v[i]%k!=0){
    v[i]--;mp[0]++;
}
    while(v[i]%k==0&&v[i]>0){
      v[i]=v[i]/k;a++;

    if(v[i]%k!=0){
        mp[a]++;
    v[i]--;
      }

    }
    

    if(v[i]%k!=0){
        give=false;
    }
}
for(auto it:mp){
  //  cout<<it.first<<" "<<it.second<<endl;
    if(it.second>1)give=false;
}

if(give){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}
}
}