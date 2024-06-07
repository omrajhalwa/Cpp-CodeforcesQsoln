#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=998244353;

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




signed main(){
int t;cin>>t;
while(t--){
int n;
cin>>n;
string s="";
cin>>s;
int one=0,zero=0,both=0;int ans=0;
for(int i=1;i<=n;i++){

if(s[i-1]=='1')one++;
if(s[i-1]=='0')zero++;


if(i==1){
    ans=(ans+1)%mod;
}else{

if(s[i-1]=='1'){

if(one>=i){
    both++;
}
else if(one==i-1){
    one++;
ans=(ans+1)%mod;
}else if(one+1<i){
    if(both>=i-one-1){
        
        both-=i-(one+1);
        one=i;
        ans=(ans+1)%mod;
    }else{

        break;
    }
}

}else{

if(zero>=i){
    both++;
}
else if(zero==i-1){
    zero++;
ans=(ans+1)%mod;
}else if(zero+1<i){
    if(both>=i-zero-1){
        
        both-=i-(zero+1);
        zero=i;
        ans=(ans+1)%mod;
    }else{

        break;
    }
}

}

}

if(both!=0)ans=(ans+binexp(2,both))%mod;
}

cout<<ans<<endl;
}

}


