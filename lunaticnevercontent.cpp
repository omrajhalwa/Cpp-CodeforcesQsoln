#include<bits/stdc++.h>
using namespace std;
#define int long long
 

 void solve(){

int n;cin>>n;
vector<int>v(n);
for(int &x:v){cin>>x;}
vector<int>c;
bool give=true;
if(n>1){
for(int i=0;i<n/2;i++){
    if(v[i]!=v[n-1-i])give=false;
c.push_back(abs(v[i]-v[n-1-i]));

}
}else{
    c.push_back(v[0]);
}
int a=c[0];
for(int i=0;i<c.size();i++){
a=__gcd(a,c[i]);
}
if(give){cout<<0<<endl;return;}

cout<<a<<endl;

return;
 }
signed main(){
int t;cin>>t;
while(t--){
solve();
}
}