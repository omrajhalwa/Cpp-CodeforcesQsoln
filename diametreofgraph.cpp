#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n,m,k;
cin>>n>>m>>k;
int ans=2;
if(m==0){
    ans=0;
}
else if(m==((n-1)*(1+(n-1)))/2){
ans=1;
}

if(ans<k-1&&m<=((n-1)*(1+(n-1)))/2&&m>=n-1){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}
}