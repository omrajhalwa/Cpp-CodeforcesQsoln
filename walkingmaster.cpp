#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int a,b,c,d;
int ans=0;
cin>>a>>b>>c>>d;
if(b<=d){

    ans+=abs(b-d);
    a+=abs(b-d);
    if(a>=c){
        ans+=abs(a-c);
        cout<<ans<<endl;
    }else{
        cout<<-1<<endl;
    }
}else{
    cout<<-1<<endl;
}

}

}