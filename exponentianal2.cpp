#include<bits/stdc++.h>
using namespace std;
//#define int long long
const int m=1e9+7;/*
int binmultiply(int a,int b,int mod){
int result=0;
while(b>0){
    if(b&1){
        result=(result+a)%mod;
    }

    a=(a+a)%mod;
    b>>=1;
}

return result;



}*/
int binexp(int a,int b,int mod){
    
int result=1;
while(b>0){
    if(b&1){
        result=(result*1LL*a)%mod;
    }

    a=(a*1LL*a)%mod;
    b>>=1;
}

return result;


}



signed main(){
int t;cin>>t;
while(t--){
int a,b,c;
cin>>a>>b>>c;
int r=binexp(b,c,m-1);

cout<<binexp(a,r,m)<<endl;
//cout<<ans;

}

}