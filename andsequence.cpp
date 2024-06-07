#include<bits/stdc++.h>
using namespace std;
#define int long long
 int mod=1e9+7;



void solve(){


int n;cin>>n;
vector<int>v(n);

for(int i=0;i<n;i++){
    cin>>v[i];
    
}
int mn=*min_element(v.begin(),v.end());
int ans=0;
for(int i=0;i<n;i++){
if(mn==v[i]){
    ans++;
}if((mn&v[i])!=mn){
    cout<<0<<endl;return;
}

}

int fact=1;
for(int i=1;i<=n-2;i++){fact=1LL*fact*i%mod;}


ans=ans*1LL*(ans-1)%mod;
ans=(1LL*ans*fact)%mod;
cout<<ans<<endl;




}

signed main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}