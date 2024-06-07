#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n);
for(int &x:v){cin>>x;}
sort(v.begin(),v.end());
int ans=max(v[0]*v[1],v[n-1]*v[n-2]);

cout<<ans<<endl;
}
}