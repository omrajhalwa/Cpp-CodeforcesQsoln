#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){

int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
string s="";
cin>>s;

int ans=0;
for(int i=0;i<n;i++){
    if(s[i]=='B'){
        i+=k-1;
        ans++;
    }
}
cout<<ans<<endl;
}
}