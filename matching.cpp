#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
string s="";
cin>>s;int q=0;
for(int i=0;i<s.size();i++){
if(s[i]=='?'){
    q++;
}
}
if(q==0&&s[0]!='0'){
    cout<<1<<endl;
}else if(s[0]=='0'){
cout<<0<<endl;
}else{

if(s[0]=='?'){
    int ans=9;
    for(int i=0;i<q-1;i++){
  ans*=10;
    }
    cout<<ans<<endl;
}else{
    int ans=1;
    for(int i=0;i<q;i++){
  ans*=10;
    }
    cout<<ans<<endl;
}

}
}
}