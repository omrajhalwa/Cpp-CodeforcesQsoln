#include<bits/stdc++.h>
using namespace std;
#define int long long

/*
int dp[14][2][2];
int f(int ind,int tight,int val,string s){
    int n=s.size();
if(ind==n){
    if(val==1)return 1;
return 0;
}
if(dp[ind][tight][val]!=-1)return dp[ind][tight][val];

if(tight==1){
int res=0;

for(int i=0;i<=s[ind]-'0';i++){
    int a=0;
if(i==4){a=1;}
if(val==1){a=1;}
if(i==s[ind]-'0'){
    res+=f(ind+1,1,a,s);
}else{
    res+=f(ind+1,0,a,s);
}

}



return dp[ind][tight][val]=res;

}else{
int res=0;

for(int i=0;i<=9;i++){
    int a=0;
    if(val==1){a=1;}
    if(i==4){a=1;}
    res+=f(ind+1,0,a,s);
    
}
return dp[ind][tight][val]=res;
}



}
*/

signed main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);
int t;cin>>t;
while(t--){
int n;
cin>>n;
int start=1,end=1e18;
int ans;


auto istrue=[&](string &s){
int ans=0;
for(int i=0;i<s.size();i++){

int dig=s[i]-'0';int cnt=0;
if(dig<=4){
    cnt=dig;
}else{
    cnt=dig-1;
}

cnt=cnt*pow(9,s.size()-i-1);
ans+=cnt;
if(s[i]=='4'){break;}
if(i==s.size()-1){
    ans++;
}


}

return ans-1;


};
while(start<=end){
    int mid=start+(end-start)/2;
string s="";
s=to_string(mid);



int vl=istrue(s);
if(n<=vl){
ans=mid;
end=mid-1;
}else{
    start=mid+1;
}

}

cout<<ans<<endl;
}
}
