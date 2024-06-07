#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    int t;cin>>t;
    while(t--){
int n;cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

int cnt=0,nt=0,ans=0,mx=0;bool give=true;
for(int i=0;i<n;i++){
if(v[i]==1){
    nt++;
    give=true;
}
if(nt>0&&v[i]==2&&give){
    give=false;
    cnt+=nt;
    ans=cnt/2+1;
    nt=0;
}

mx=max(ans+nt,mx);
if(mx<ans+nt){
mx=ans+nt;}
}
cout<<mx<<endl;
}
}