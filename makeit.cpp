#include<bits/stdc++.h>
using namespace std;
#define int long long
int mod=998244353;


vector <int> fact (200005);
 
int binexp(int a,int b){
    
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

void factori () {
    fact[0] = 1;
    for (int i = 1; i < 200005; i++) {
        fact[i] = (fact[i - 1] * i)%mod;
    }
}
int ncr(int n,int r){
    if(r==0) return 1;
    if(r==1) return n;

    return fact[n]*1LL*binexp(fact[n-r],mod-2)*1LL*binexp(fact[r],mod-2); 
}
signed main(){
    factori();
int t;
cin>>t;
while(t--){

string s="";
cin>>s;
int n=s.size();int ans=0;
int sec=0;int p=1,com=0;

int ans1=0,ans2=1,cnt=0;
for(int i=0;i<n-1;i++){
    if(s[i]==s[i+1]){
        ++p;
        
    }else{
      if(p>1){
        
        ans2=(ans2*1LL*p)%mod;
        cnt+=p-1;
      }
        p=1;
    }
}

if(p>1){
    ans1++;
        ans2=(ans2*1LL*p)%mod;
        cnt+=p-1;
   
    p=1;
}

cout<<cnt<<" "<<(ans2*fact[cnt])%mod<<endl;
}


}