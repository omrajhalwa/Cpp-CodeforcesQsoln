#include<bits/stdc++.h>
using namespace std;
#define int long long

//benny  digit dp 2;
int dp[11][2];
int f(string str,int ind=0,int tight=1){
if(ind==str.size()){
    return 1;
}
if(dp[ind][tight]!=-1)return dp[ind][tight];
if(tight==1){

int res=0;
    for(int i=0;i<=str[ind]-'0';i++){
        if(i!=3){
        if(i==str[ind]-'0'){
           res+=f(str,ind+1,1);
        }else{
           res+=f(str,ind+1,0);
        }
        }
    }

    return dp[ind][tight]=res;
}else{
int res=0;
    for(int i=0;i<=9;i++){
        if(i!=3){
        res+=f(str,ind+1,0);
        }
    }
    return dp[ind][tight]=res;
}



}


signed main(){
int t;
cin>>t;
while(t--){
int l,r;
cin>>r;
l=l-1;

string b=to_string(r);
memset(dp,-1,sizeof(dp));
cout<<f(b,0,1)-1<<endl;
}
}