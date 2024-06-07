#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;cin>>t;
while(t--){
int k,n;
cin>>k>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
vector<int>c;
c.push_back(k-1-(v[n-1]-v[0]));
for(int i=0;i<n-1;i++){
c.push_back(v[i+1]-v[i]-1);
}
sort(c.begin(),c.end(),greater<int>());
int minu=0,ans=0;
for(int i=0;i<c.size();i++){
if(c[i]-minu>0){
    ans++;
    c[i]--;c[i]--;
if(c[i]-minu>0){
   ans+=c[i]-minu;
}}
minu+=4;
}

cout<<k-ans<<endl;

}
}