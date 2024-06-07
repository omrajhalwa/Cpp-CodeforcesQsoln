#include<bits/stdc++.h>
using namespace std;
#define int long long
int mod=1e9+7;
signed main(){

int n;
cin>>n;
vector<int>hash(1e6+7,0);
for(int i=1;i<=1e6+7;i++){
    
    for(int j=i;j<=1e6;j+=i){
      hash[j]=(hash[j]+i)%mod;
    }
}
for(int i=1;i<=1e6;i++){
    hash[i]=(hash[i]+hash[i-1])%mod;
}
cout<<hash[n]<<endl;

}