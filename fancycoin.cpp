#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
signed main(){
     fast_io;
int t;
cin>>t;
while(t--){
int m,k,a,b;
cin>>m>>k>>a>>b;
int ans=0;
int kc=min(b,m/k);
m-=kc*k;

if(a<m){
int rem=m-a;
int rema=(rem/k);
if(rem%k!=0)rema++;
//cout<<rema;
if(a>=rema*k-rem){
ans+=rema;
}else{
    ans+=rem/k+(rem%k);
}
}
cout<<ans<<endl;



}
}