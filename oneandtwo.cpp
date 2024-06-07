#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mo 1000000007
signed main(){
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

int k=1,p=1;
vector<int>c;
vector<int>o;
for(int i=0;i<n;i++){
k=(k*v[i])%mo;
c.push_back(k);
}for(int i=n-1;i>=0;i--){
p=(p*v[i])%mo;
o.push_back(p);
}
reverse(o.begin(),o.end());int ans=0;
for(int i=0;i<n-1;i++){
if(c[i]==o[i+1]){
    ans=i+1;
    break;
}
}

if(ans==0){
    cout<<-1<<endl;
}else{
    cout<<ans<<endl;
}
}
}