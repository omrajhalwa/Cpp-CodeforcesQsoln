#include<bits/stdc++.h>
using namespace std;
#define int long long


int dp[11][2][50][50];
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


int f(string s,int ind,int tight,int odsum,int evsum){

if(ind==s.size()){
    int a;

if(s.size()%2!=0) {a=evsum-odsum;}
else {a=odsum-evsum;}
if(isprime(a)){
    return 1;
}else{
    return 0;
}
}

if(dp[ind][tight][odsum][evsum]!=-1)return dp[ind][tight][odsum][evsum];
if(tight==1){

int res=0;

for(int i=0;i<=s[ind]-'0';i++){


    if(i==s[ind]-'0'){
        if(ind%2==0){
        res+=f(s,ind+1,1,odsum+i,evsum);
        }else{
            res+=f(s,ind+1,1,odsum,evsum+i);
        }
    }else{
       if(ind%2==0){
        res+=f(s,ind+1,0,odsum+i,evsum);
        }else{
            res+=f(s,ind+1,0,odsum,evsum+i);
        }
    }
}

return dp[ind][tight][odsum][evsum]=res;
}else{

int res=0;
    for(int i=0;i<=9;i++){
       if(ind%2==0){
        res+=f(s,ind+1,0,odsum+i,evsum);
        }else{
            res+=f(s,ind+1,0,odsum,evsum+i);
        }
    }

    return dp[ind][tight][odsum][evsum]=res;
}


}


signed main(){
    cout<<pow(3,2)<<endl;
int t;cin>>t;
while(t--){
int l,r;
cin>>l>>r;
l=l-1;
string a=to_string(l);
string b=to_string(r);
int ans1,ans2;
memset(dp,-1,sizeof(dp));
ans1=f(a,0,1,0,0);
memset(dp,-1,sizeof(dp));
ans2=f(b,0,1,0,0);
cout<<ans2-ans1;
cout<<endl;
}

}