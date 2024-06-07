#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e7+10;
vector<bool>isprime(N,1);
vector<int>lp(N,0),hp(N,0);


void sieve(){
isprime[0]=isprime[1]=false;
for(int i=2;i<N;i++){
    if(isprime[i]==true){
        lp[i]=hp[i]=i;
        for(int j=2*i;j<N;j+=i){
            isprime[j]=false;
            hp[j]=i;
            if(lp[j]==0){
                lp[j]=i;
            }
        }
    }
}

}



signed main(){
    
sieve();
int t;cin>>t;
while(t--){
unordered_map<int,int>prime_factors;
auto pf=[&](int num){
    //logn....

while(num>1){
    int prime_factor=hp[num];
    while(num%prime_factor==0){
        num/=prime_factor;
        prime_factors[prime_factor]++;
    }
}
return;
};

int n;cin>>n;
vector<int>v(n);
for(int &x:v){cin>>x;pf(x);}
int ans1=0,ans2=0;

for(auto it:prime_factors){
    ans1+=it.second/2;
    ans2+=it.second%2;
    
}

ans1+=ans2/3;


    cout<<ans1<<endl;
}
}