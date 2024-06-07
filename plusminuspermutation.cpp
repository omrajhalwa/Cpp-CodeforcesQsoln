#include<bits/stdc++.h>
using namespace std;
#define int long long



signed main(){

     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;cin>>t;
while(t--){
int n,a,b;
cin>>n>>a>>b;
int cnta=n/a;
int cntb=n/b;
int common=n/((a*b)/__gcd(a,b));
cnta-=common;
cntb-=common;
int ans=(n*(n+1))/2;
ans-=((n-cnta)*(n-cnta+1))/2;
ans-=(cntb*(cntb+1))/2;

cout<<ans<<endl;

}

}