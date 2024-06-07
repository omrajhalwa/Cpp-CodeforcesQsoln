#include<bits/stdc++.h>
using namespace std;
#define int long long


int bs(vector<pair<pair<int,int>,int>>&v,int &ind,int &val){
int start=ind+1,end=v.size()-1;
int ans=-1;
while(start<=end){
int mid=start+(end-start)/2;

if(v[mid].first.first>=val+1){
ans=mid;
end=mid-1;
}else{
    start=mid+1;
}



}

return ans;

}
int dpp[400005];

int f(int ind,vector<pair<pair<int,int>,int>>&v){
int n=v.size();
if(ind==n)return 0;
if(dpp[ind]!=-1)return dpp[ind];
int nottake=f(ind+1,v);

int jump=bs(v,ind,v[ind].first.second);

int take=v[ind].second;
if(jump!=-1)take+=f(jump,v);


return dpp[ind]=max(take,nottake);
}


signed main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
int n;cin>>n;
vector<pair<pair<int,int>,int>>v;

for(int i=0;i<n;i++){
    int a,b,c;
    cin>>a>>b>>c;
    v.push_back({{a,b},c});
}
sort(v.begin(),v.end());
memset(dpp,-1,(sizeof(dpp)));

vector<int>dp(500005,0);


for(int ind=n-1;ind>=0;ind--){

int nottake=dp[ind+1];

int jump=bs(v,ind,v[ind].first.second);

int take=v[ind].second;
if(jump!=-1)take+=dp[jump];


 dp[ind]=max(take,nottake);

}

//int a=dp[0];
cout<<f(0,v);



}