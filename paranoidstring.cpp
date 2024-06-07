#include<bits/stdc++.h>
using namespace std;
#define int long long
//1 or 0 apne ange walo ko kha jayga
signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
string s="";
cin>>s;
int mn=0;
if(s.size()>1){
for(int i=s.size()-2;i>=0;i--){
    if(s[i]==s[i+1]){
        mn+=i+1;
    }
}
}
int ans;
ans=n*(n+1)/2;
ans-=mn;
cout<<ans<<endl;


}


}