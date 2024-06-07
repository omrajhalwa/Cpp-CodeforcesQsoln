#include<bits/stdc++.h>
using namespace std;
#define int long long
#define TESTLIMITPASSKARADE std::ios sync_with_stdio (NULL); cin.tie(0); cout.tie(0);

int mod=998244353;


//  jai shree ram......
// jai bajrangbali....



/*
vector<int> a(n);
multiset<int> s(a.begin(), a.end());



*/
void permutations(vector<int> &nums, int i, vector<vector<int>> &res) {
        if(i == nums.size()-1) {
            res.push_back(nums);
            return;
        }
        for(int k=i; k<nums.size(); k++) {
            swap(nums[k],nums[i]);
            permutations(nums,i+1,res);
            swap(nums[k],nums[i]);
        }
}





vector <int> fact (200005);
 
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

void factori () {
    fact[0] = 1;
    for (int i = 1; i < 200005; i++) {
        fact[i] = (fact[i - 1] * i)%mod;
    }
}

int ncr(int n,int r){
    if(r>n) return 0;
    if(r==n) return 1;

    return ((fact[n]*1LL*binexp(fact[n-r],mod-2)%mod)*1LL*binexp(fact[r],mod-2))%mod; 
}

int nextindex(int start,int end,int cur,vector<pair<int,int>>v){

int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(v[mid].first>v[cur].second){
                   ans=mid;
                   end=mid-1;
        }else{
            start=mid+1;
        }
    }

    return ans;
}

// int fun(int ind,int prev,vector<pair<int,int>>v){

// if(ind==v.size()) return 0;
// int nottake=fun(ind+1,prev,v);

// int take=0;

// if(prev==-1||v[prev].second<v[ind].first)take=fun(ind+1,ind,v)+abs(v[ind].first-v[ind].second)+1;




// return max(nottake,take);
// }

signed main(){
TESTLIMITPASSKARADE
factori();
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>dp(n+2,1e9);
vector<int>v(n+1);
for(int i=1;i<=n;i++){
    cin>>v[i];
}
int cnt=0;
for(int i=1;i<=n+1;i++){
     dp[i]=min(cnt,dp[i]);
     cnt=dp[i];
    if(n-i>=v[i]){
       // dp[i]=min(cnt,dp[i]);
        dp[i+v[i]+1]=min(dp[i],dp[i+v[i]+1]);
       // cnt=dp[i+v[i]+1];
    }
        cnt++;
   // cout<<dp[i];
}


cout<<dp[n+1]<<endl;
}
}