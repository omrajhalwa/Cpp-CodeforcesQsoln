#include<bits/stdc++.h>
using namespace std;
//#define int long long

signed main(){
int mod=1e9+7;

    int n,x,pos;
cin>>n>>x>>pos;
n--;
int ans=1;
while(n>1){
    ans=(ans*1LL*n)%mod;
    
}
cout<<ans<<endl;
}