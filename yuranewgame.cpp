#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){

string s="";cin>>s;
int ans=0;int n=s.size();
if(s[0]=='_'){
    ans++;
}if(s[n-1]=='_'){
    ans++;
}
if(n==1&&s[0]=='^'){ans++;}
for(int i=0;i<n;i++){
if(i<n-1&&s[i]=='_'&&s[i+1]!='^'){
    ans++;
}
}
cout<<ans<<endl;
}
}