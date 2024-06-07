#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;
cin>>t;
while(t--){

int n;
cin>>n;
vector<int>v(n);int sum=0;
for(int i=0;i<n;i++)
{
cin>>v[i];
sum+=v[i];
}
int rum=0,mx=1;
for(int i=0;i<n-1;i++){
    rum+=v[i];
  //  cout<<rum<<endl;
    mx=max(__gcd(rum,sum-rum),mx);
}


cout<<mx<<endl;
}
}