#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);int ans=0;
    for(int i=0;i<n;i++){cin>>v[i];}
    sort(v.begin(),v.end());
    vector<int>c;
    for(int i=n/2;i<n;i++){c.push_back(v[i]);}
    vector<int>ind(c.size()+1);
    int cnt=0;
    int key=0;
    if(n>1){
    for(int i=0;i<c.size()-1;i++){
         cnt+=(c[i+1]-c[i])*(i+1);
         ind[i]=cnt; 
         if(ind[i]<=k){
            key++;
         }
    }
    //cout<<ind[key-1];
   if(key>0) k-=ind[key-1];

    ans=k/(key+1)+c[key];
  //cout<<k/key;
}
  if(n==1){cout<<k+v[0];}
  else{cout<<ans<<endl;}
    
   
    
}