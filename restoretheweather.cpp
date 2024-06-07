#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){
int n,k;cin>>n>>k;
vector<pair<int,int>>v(n);
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>v[i].first;
    v[i].second=i;
}for(int i=0;i<n;i++){
    cin>>a[i];
}

sort(v.begin(),v.end());
sort(a.begin(),a.end());
for(auto it:v){
 //   cout<<it.first<<" "<<it.second<<endl;
}
vector<int>ans(n);
for(int i=0;i<n;i++){
    ans[v[i].second]=a[i];

}

for(auto it:ans){cout<<it<<" ";}
cout<<endl;

}
signed main(){
int t;cin>>t;
while(t--){
solve();
}
}