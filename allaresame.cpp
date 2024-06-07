#include<bits/stdc++.h>
using namespace std;

signed main(){

int t;cin>>t;
while(t--){
int n;cin>>n;vector<int>v(n);
for(int i=0;i<n;i++){cin>>v[i];}
sort(v.begin(),v.end());
int ans=v[n-1]-v[n-2];
for(int i=n-2;i>0;i--){
ans=__gcd(ans,v[i]-v[i-1]);
}
if(ans==0){
    cout<<-1<<endl;
}else{
    cout<<abs(ans)<<endl;
}
}
}