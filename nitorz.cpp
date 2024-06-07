#include<bits/stdc++.h>

using namespace std;
#define int long long
signed main(){

int t;
cin>>t;
while(t--){
int n,z;
cin>>n>>z;
int a,mx=0;
for(int i=0;i<n;i++){
cin>>a;
mx=max(mx,(a|z));
}

cout<<(mx)<<endl;

}}