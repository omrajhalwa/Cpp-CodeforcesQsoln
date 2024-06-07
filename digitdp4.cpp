#include<bits/stdc++.h>
using namespace std;
#define int long long


int dp[11][2][11][11][22][2];


int f(string s,int ind,int tight,int odno,int evno,int rem,int k,int zero){

if(ind==s.size()){

    if(evno==odno&&rem==0)return 1;
return 0;

}
if(dp[ind][tight][odno][evno][rem][zero]!=-1)return dp[ind][tight][odno][evno][rem][zero];

if(tight==1){

int res=0;

for(int i=0;i<=s[ind]-'0';i++){
   // if(ind==0&&i==0)continue;
    int newrem=(rem*10+i)%k;
int a=0,b=0;
if(i!=0){zero=1;}
if(zero==1){
if(i%2==0){a++;}
else{b++;}

}
    if(i==s[ind]-'0'){
        res+=f(s,ind+1,1,b+odno,a+evno,newrem,k,zero);
    }else{
         res+=f(s,ind+1,0,b+odno,a+evno,newrem,k,zero);
    }
}
return dp[ind][tight][odno][evno][rem][zero]=res;
}else{



    int res=0;

    for(int i=0;i<=9;i++){
        //  if(ind==0&&i==0)continue;
        int newrem=(rem*10+i)%k;
        int a=0,b=0;
if(i!=0){zero=1;}
if(zero==1){
if(i%2==0){a++;}
else{b++;}

}
        res+=f(s,ind+1,0,b+odno,a+evno,newrem,k,zero);
    }
    return dp[ind][tight][odno][evno][rem][zero]=res;
}



}



signed main(){
int k;
cin>>k;
int l,r;
cin>>l>>r;
l=l-1;
string a=to_string(l);
string b=to_string(r);
memset(dp,-1,sizeof(dp));
int ans1=f(b,0,1,0,0,0,k,0);
memset(dp,-1,sizeof(dp));

cout<<ans1-f(a,0,1,0,0,0,k,0);





}