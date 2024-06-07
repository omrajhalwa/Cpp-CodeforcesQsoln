#include<bits/stdc++.h>
using namespace std;
//#define int long long
const int mod=1e9+7;
int pow(int a,int b){
     if(b==0)return 1;
int res=pow(a,b/2);

if(b&1){
    return (a*((res*1LL*res)%mod))%mod;
}

return (res*1LL*res)%mod;

}



signed main(){


int t;cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    cout<<(pow(a,b))<<endl;
}


}