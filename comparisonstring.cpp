#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
string s="";
cin>>s;
int mx=0,p=1;

if(s.size()>1){
for(int i=0;i<s.size()-1;i++){
    if(s[i]!=s[i+1]){
   p=1;
    }else{
       p++;
    }
    mx=max(p,mx);
}
if(mx==0){
    cout<<2<<endl;
}else{
    cout<<mx+1<<endl;
}
}else{
    cout<<2<<endl;
}

}

}