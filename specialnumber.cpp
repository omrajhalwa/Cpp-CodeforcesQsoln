#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007



int pow(int a, int n){
    int ans=1;
      while(n>0){
         
        int last_bit = n&1;
           
          
          if(last_bit){
            ans = (ans*a)%mod;
        }
       
     
      a = (a*a)%mod;
      n = n >> 1;
    }
      return ans;
}
signed main(){
int t;cin>>t;while(t--){
int n,k;
cin>>k>>n;
int a=0;
for(int i=30;i>=0;i--){
    int b=pow(k,i);
a+=((n&(1<<i))>>i)*(b);
//built in power function give wrong answer in last test case
//this power function give o(log(n))time complexity
}
cout<<(a%mod)<<endl;
}


}