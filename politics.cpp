#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n,k;
cin>>n>>k;
vector<string>v(n);

for(int i=0;i<n;i++){
    cin>>v[i];
}
int ans=1;
for(int i=1;i<n;i++){
if(v[i]==v[0]){
    ans++;
}
}
cout<<ans<<endl;

}

}