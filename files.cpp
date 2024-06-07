
#include<bits/stdc++.h>
using namespace std;

#define int long long
signed main(){
    int t;cin>>t;
    while(t--){
int n,k,p=1;
cin>>n>>k;
int ans=0;
while(n-p>0){
    
   // cout<<p<<endl;
    if(p<k){
        p+=p;
        ans++;
    }else{
        if((n-p)%k==0){
        ans+=(n-p)/k;break;}
        else{
        ans+=(n-p)/k+1;break;
        }
    }
}
//cout<<1e18/1;
cout<<ans<<endl;
    }
}