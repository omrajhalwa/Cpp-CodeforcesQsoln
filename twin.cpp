#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(){

int n;cin>>n;
vector<int>v(n);
for(int i=1;i<=n;i++){
    cin>>v[i-1];
}
 for(int i=1;i<=n;i++)
{
   cout<<n+1-v[i-1]<<" ";
}cout<<endl;
}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

int t;cin>>t;
while(t--){
    solve();
}

  
}