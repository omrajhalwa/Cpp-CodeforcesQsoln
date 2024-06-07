#include<bits/stdc++.h>
using namespace std;
#define int long long
int mod=1e9+7;
signed main(){

    int n;
    cin>>n;int sum=0;
     int p=sqrt(n);
     cout<<p;
    for(int i=1;i<=p;i++){
        sum=(sum+((n/i)*i)%mod)%mod;
    }
    for(int i=1+p;i<=n;i++){
        sum=(sum+((n/i)*i)%mod)%mod;
    }
    
    cout<<sum;
}