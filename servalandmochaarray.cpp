#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int a=v[0];bool give=true;
for(int i=1;i<n;i++){
    a=__gcd(a,v[i]);
}
//cout<<a<<endl;

if(a>n){
    cout<<"NO"<<endl;
}else{
int mn=INT_MAX,p,k;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      int a=__gcd(v[i],v[j]);
      if(a<mn){
        mn=a;
        p=i;k=j;
      }
    }
}
//cout<<v[p]<<" "<<v[k];
int j=2;
map<int,int>mp;vector<int>c;
c.push_back(v[p]);c.push_back(v[k]);
mp[p]=10,mp[k]=10;
int b=__gcd(v[p],v[k]);
while(j<=n){


for(int i=0;i<n;i++){
    if(mp[i]!=10&&__gcd(b,v[i])<=j+1){
      b=__gcd(b,v[i]);
      mp[i]=10;
      c.push_back(v[i]);i=n;
    }
}
j++;

}
int a=c[0];
for(int i=1;i<c.size();i++){
    if(__gcd(a,c[i])<=i+1){
        a=__gcd(a,c[i]);
    }else{
        give=false;
    }
}
if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}


}


}