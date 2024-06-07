#include<bits/stdc++.h>
using namespace std;
#define int long long
int dp[10][75][2];
bool isprime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

int f(int ind,int sum,int tight,string str){

if(ind==str.size()){
    if(isprime(sum))return 1;

    return 0;
}
if(dp[ind][sum][tight]!=-1)return dp[ind][sum][tight];

if(tight==1){

    int res=0;
    for(int i=0;i<=str[ind]-'0';i++){
        if(i==str[ind]-'0')
        res+=f(ind+1,sum+i,1,str);
        else
        res+=f(ind+1,sum+i,0,str);
    }

    return dp[ind][sum][tight]=res;
}else{

int res=0;
    for(int i=0;i<=9;i++){
     res+=f(ind+1,sum+i,0,str);
    }
    return dp[ind][sum][tight]=res;
}


}

signed main(){
/*#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif*/
// gone spoj digit dp.......
int t;cin>>t;
while(t--){
int l,r;
cin>>l>>r;
l=l-1;
string a=to_string(l);
string b=to_string(r);
memset(dp,-1,sizeof(dp));
int ans1=f(0,0,1,a);
memset(dp,-1,sizeof(dp));
int ans2=f(0,0,1,b);
cout<<ans2-ans1<<endl;

}
}