#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;
cin>>t;
while(t--){
int n,c;cin>>n>>c;
vector<int>v(n+1);
for(int i=1;i<=n;i++){
    cin>>v[i];
    v[i]+=i;
}
sort(v.begin(),v.end());
int sum=0,ans=0;
for(int i=1;i<=n;i++){
 sum+=v[i];
 if(sum<=c){
    ans++;
 }
}
cout<<ans<<endl;

}
}