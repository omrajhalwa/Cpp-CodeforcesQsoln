#include<bits/stdc++.h>
using namespace std;
#define int long long

int dp[101][90][70][70];
//wrong answer
int f(int ind,int one,int ans1,int ans2,int totone,int totzero,string s){

   if(ind>s.size())return 1e9;

if(one==0&&ind==s.size()){
if(ans1==ans2){
//cout<<ans1<<" "<<ans2<<endl;
return 0;
}
return 1e9;
}
if(one<0)return 1e9;
if(dp[ind][one][ans1][ans2]!=-1)return dp[ind][one][ans1][ans2];
int var=0;int takez=0;
if(s[ind]!='1'){
 takez=f(ind+1,one-1,ans1+ind-(totone-one),ans2,totone,totzero,s)+1;
}else{
 takez=f(ind+1,one-1,ans1+ind-(totone-one),ans2,totone,totzero,s);
}
int takeo=0;
if(s[ind]!='0'){
 takeo=f(ind+1,one,ans1,ans2+totone-one,totone,totzero,s)+1;
}else{
 takeo=f(ind+1,one,ans1,ans2+totone-one,totone,totzero,s);
}



return dp[ind][one][ans1][ans2]=min(takez,takeo);
}

signed main(){
memset(dp,-1,sizeof(dp));
int n;
    string s="";
    cin>>s;
    int one1=0,zero=0;n=s.size();
    for(int i=0;i<n;i++){
   if(s[i]=='0')zero++;
   else one1++;
    }
 cout<<f(0,one1,0,0,one1,zero,s)/2;

}