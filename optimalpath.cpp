#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    int sum=0;
for(int i=1;i<=m;i++){
   sum+=i;
}for(int i=2;i<=n;i++){
   sum+=(i-1)*m+m;
}
cout<<sum<<endl;
}}