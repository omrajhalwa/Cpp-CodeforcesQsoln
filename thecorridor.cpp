#include<bits/stdc++.h>
using namespace std;
#define int long long



signed main(){

     ios_base::sync_with_stdio(false);
    cin.tie(NULL);

int t;cin>>t;
while(t--){
int n;cin>>n;
vector<pair<int,int>>v(n);
for(int i=0;i<n;i++){
    cin>>v[i].first>>v[i].second;
}
int p=INT_MAX,ans=INT_MAX;
for(int i=0;i<n;i++){

if(p>=v[i].first){
int a=(v[i].second-1)/2;
p=min(p,v[i].first+a);
ans=min(ans,p);
}
}

cout<<ans<<endl;
}

}