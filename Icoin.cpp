#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define float double
float f(int ind,int cnt,vector<float>v){

if(cnt==0)return 1;
if(ind==0)return 0;
float nottake=f(ind-1,cnt,v)*(1-v[ind-1]);
float take=f(ind-1,cnt-1,v)*(v[ind-1]);    

    
return take+nottake;
}


signed main(){
fast_io;

int n;cin>>n;
vector<float>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
vector<vector<float>>dp(n+1,vector<float>(n+1,0));
for(int ind=0;ind<=n;ind++)dp[ind][0]=1;


for(int ind=1;ind<=n;ind++){
    for(int cnt=1;cnt<=(n+1)/2;cnt++){
        float nottake=dp[ind-1][cnt]*(1-v[ind-1]);
float take=dp[ind-1][cnt-1]*(v[ind-1]);    

    
dp[ind][cnt]=take+nottake;
    }
}
float x=dp[n][(n+1)/2];
cout<<fixed<<setprecision(10);
cout<<x<<endl;

}