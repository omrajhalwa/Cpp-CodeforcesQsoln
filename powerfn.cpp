#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
int power(int x, int n)
{
    int result = 1;
    while (n > 0) {
        if (n & 1 == 1) // y is odd
        {
            result = ((result%mod) * (x%mod))%mod;
        }
        x = ((x%mod) * (x%mod))%mod;
        n = n >> 1; // y=y/2;
    }
    return result%mod;
}


int p(int a,int b)
{
    int res=1;
    while(b>=1)
    {
        if(b%2==1)res=((res%mod)*(a%mod))%mod;
        a=((a%mod)*(a%mod))%mod;
        b/=2;
    }
    return res;
 
}

int pow(int n,int k){
    if(k==1)return n;

    if(k%2==0){
        return ((pow(n,k/2)+mod)%mod)*1LL*((pow(n,k/2)+mod)%mod);
    }

    return n*((pow(n,k/2)+mod)%mod)*1LL*((pow(n,k/2)+mod)%mod);
}



signed main(){

int t;cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int c=p(a,b);
    cout<<(c+mod)%mod<<endl;
}


}