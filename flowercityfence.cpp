#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){

int n;cin>>n;
vector<int>v(n);
map<int,int>mp1;
map<int,int>mp2;
for(int &x:v){cin>>x;mp1[x]++;}
int a=0;
for(int i=n-1;i>=0;i--){
if(v[i]!=a){
    mp2[i+1]=v[i]-a;
    a=v[i];
}
}
bool give=true;
for(int i=0;i<n;i++){
    if(mp1[v[i]]!=mp2[v[i]]){
        give=false;
    }
}

if(give){cout<<"YES"<<endl;}
else{
    cout<<"NO"<<endl;
}

}
}