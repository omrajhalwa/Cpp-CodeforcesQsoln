#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
vector<int>v(n+1);
for(int i=1;i<=n;i++){
    cin>>v[i];
}int p=1,ans=0;
for(int i=1;i<=n;i++){
   if(v[i]==p){
    ans++;
    p++;
   }
}

if((n-ans)%k==0)
cout<<(n-ans)/k<<endl;
else{
    cout<<(n-ans)/k+1<<endl;
}
}
}