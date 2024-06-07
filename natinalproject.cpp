#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n,p,q;
cin>>n>>p>>q;
int day=n;
int ans=0;
n=(n+1)/2;
if(n<p){p=n;}
if(n%p==0){p=n/p;}else{p=n/p+1;}
ans+=q*(p-1)+n;
cout<<max(day,ans)<<endl;
}


}