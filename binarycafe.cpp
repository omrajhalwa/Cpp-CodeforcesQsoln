#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n,k;
cin>>n>>k;

if(k>30){
    k=30;
}
int ans=1;
if(n<(1<<k)){
    ans+=n;
}else{
    ans=(1<<k);
}

cout<<ans<<endl;
}

}