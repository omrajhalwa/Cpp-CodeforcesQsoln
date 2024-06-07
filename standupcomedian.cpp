#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;cin>>t;while(t--){

int a,b,c,d;
cin>>a>>b>>c>>d;


int mn,mx;
mn=min(b,c);
mx=max(b,c);
int diff,ans=0;
diff=mx-mn;
if(a>0){
    ans+=a+2*mn;

if(a<diff){
    ans=ans+a+1;
}else{
    ans=ans+diff;
    a-=diff;


if(a>=d){
    ans+=d;
}else{
    ans+=a+1;
}

}}else if(b!=0||c!=0||d!=0){
ans++;

}
cout<<ans<<endl;
}
}