#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<int>isprime(5000000,1);

void sieve(){
isprime[0]=isprime[1]=0;

for(int i=2;i<500000;i++){
    if(isprime[i]==1){
    for(int j=2*i;j<500000;j+=i){
        isprime[j]=0;
    }
    }
}
}





signed main(){

sieve();


int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
    vector<int>v(n);
    int one=0;int cnt=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==1){
            one++;
        }
        if(isprime[v[i]]==1){
            cnt++;
        }
    }

    cout<<cnt*((one*(one-1))/2)<<endl;
}
}