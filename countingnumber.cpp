#include<bits/stdc++.h>
using namespace std;
#define int long long

int ro=0;
int dp[20][2][13];
int f(int ind,int tight,int prev,string s){
int n=s.size();
if(ind==n){//cout<<ro<<prev<<" ";
return 1;}
if(dp[ind][tight][prev]!=-1)return dp[ind][tight][prev];


ro=prev;
if(tight==1){

int res=0;


for(int i=0;i<=s[ind]-'0';i++){

 if(prev==10&&i==0){

  if(i==s[ind]-'0'){
res+=f(ind+1,1,prev,s);

    }else{
        res+=f(ind+1,0,prev,s);
    
}


}else if(prev!=i){
    if(i==s[ind]-'0'){
res+=f(ind+1,1,i,s);

    }else{
        res+=f(ind+1,0,i,s);
    
}}
}

return dp[ind][tight][prev]=res;
}else{


    int res=0;
    for(int i=0;i<=9;i++){
        if(prev==10&&i==0){

           res+=f(ind+1,0,prev,s);
    
             }else if(prev!=i){
        res+=f(ind+1,0,i,s);
        
        }




    }


return dp[ind][tight][prev]=res;

}
}



signed main(){

int  l,r;
cin>>l>>r;

string a=to_string(l-1);
string b=to_string(r);

memset(dp,-1,sizeof(dp));
int ans1=f(0,1,10,b);
memset(dp,-1,sizeof(dp));
int ans2=f(0,1,10,a);

cout<<ans1-ans2;



}