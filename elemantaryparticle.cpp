#include<bits/stdc++.h>
using namespace std;

#define int long long




signed main(){

int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n);
map<int,int>mp;map<int,int>m;
for(int i=0;i<n;i++){
cin>>v[i];


}
int ans=0,pns=0;
for(int i=0;i<n;i++){

mp[v[i]]++;
if(mp[v[i]]==2){
    ans=n-i+m[v[i]];
    pns=max(ans,pns);
    mp[v[i]]--;
}
m[v[i]]=i;
}



if(mp.size()==n){
    cout<<-1<<endl;
}else{
  
   // int an=max(ans,pns);
  cout<<pns<<endl;
}

}

}