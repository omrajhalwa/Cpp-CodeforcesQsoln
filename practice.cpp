#pragma warning(disable:4996)
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize ("-ffloat-store")
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define TESTLIMITPASSKARADE std::ios sync_with_stdio (NULL); cin.tie(0); cout.tie(0);

int mod=1e9+7;
clock_t time_p=clock();
void om()
{
    time_p=clock()-time_p;
    cerr<<"Time Taken : "<<(float)(time_p)/CLOCKS_PER_SEC<<"\n";
}

//  jai shree ram......
// jai bajrangbali....

/*
No Results:Keep Working..............
Bad Results:Keep Working........................
Good Results:Keep Working.............................
*/

/*
vector<int> a(n);
multiset<int> s(a.begin(), a.end());



*/
// void permutations(vector<int> &nums, int i, vector<vector<int>> &res) {
//         if(i == nums.size()-1) {
//             res.push_back(nums);
//             return;
//         }
//         for(int k=i; k<nums.size(); k++) {
//             swap(nums[k],nums[i]);
//             permutations(nums,i+1,res);
//             swap(nums[k],nums[i]);
//         }
// }





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


// int dfs(int row,int num,int start,int end,vector<int>&vis){

// if(vis[num]!=1){
//    vis[num]=1;
// }else{
//    return 0;
// }
// if(row==0){
//    return 0;
// }

// if(dp[num]!=-1){ return dp[num];}

//       if(start<num&&num<end){
//          return dp[num]=dfs(row-1,num-row+1,start-row+1,start-1,vis)+dfs(row-1,num-(row),start-row+1,start-1,vis)+(num*num);
//         }else if(start==num){
//          return dp[num]=dfs(row-1,num-row+1,start-row+1,start-1,vis)+(num*num);
//         }else{
//         return dp[num]=dfs(row-1,num-(row),start-row+1,start-1,vis)+(num*num);
//         }


// }

int rev(int n){
    int x=0;
    while(n>0){
    int r=n%10;
    n=n/10;
    x=x*10+r;
}
 return x;
}



signed main(){
    TESTLIMITPASSKARADE

auto uttar=[&](){
int n;
cin>>n;

 multiset<int>st;
 for(int i=0;i<n;i++){
    int x;cin>>x;
    st.insert(x);
 }

while(!st.empty()){
    auto it=*(st.begin());
  cout<<it<<" ";
    st.erase(st.begin());

}
};

int tAsti;
cin>>tAsti;
while(tAsti--){
uttar();
}




om();
}