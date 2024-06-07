#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){

int n;cin>>n;
vector<int>v(n);
vector<int>c(n);
map<int,int>mp1,mp2;int mx=0,cnt1=1,cnt2=1;
for(int i=0;i<n;i++){
    cin>>v[i];
    mp1[v[i]]=1;
    
}for(int i=0;i<n;i++){
    cin>>c[i];
       mp2[c[i]]=1;
    
}
 for(int i=0;i<n;i++){
  if(i<n-1){
    if(v[i]==v[i+1]){
        cnt1++;
         mp1[v[i]]=max(cnt1,mp1[v[i]]);
    }else{
        cnt1=1;
    }
  }
 
 }

 for(int i=0;i<n;i++){
  if(i<n-1){
    if(c[i]==c[i+1]){
        cnt2++;
        mp2[c[i]]=max(mp2[c[i]],cnt2);
    }else{
        cnt2=1;
    }
  }
  
 }
 
int ans=1;



for(int i=0;i<n;i++){
ans=max(ans,mp1[v[i]]+mp2[v[i]]);
ans=max(ans,mp1[c[i]]+mp2[c[i]]);

}
cout<<ans<<endl;

}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

int t;cin>>t;
while(t--){
    solve();
}

  
}