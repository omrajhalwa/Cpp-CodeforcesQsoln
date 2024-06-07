#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n,k;
cin>>n>>k;
vector<pair<int,int>>v(n);
for(int i=0;i<n;i++){
    cin>>v[i].first;
}for(int i=0;i<n;i++){
    cin>>v[i].second;
}

int ans=-1;

int p=0;int inte=0;
for(int i=0;i<n;i++){
    if(v[i].first<=k){
      if(v[i].second>=p){
        p=v[i].second;
        ans=i+1;
      }
    }

    k--;
}

cout<<ans<<endl;
}
}