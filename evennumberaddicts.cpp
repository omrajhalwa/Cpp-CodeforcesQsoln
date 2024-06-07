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


int dp[101][101][101][3];
int fun(int even,int odd,int alice,int ite){


if(even==0&&odd==0){
    if(alice%2==0){
        return 2;
    }else{
        return 3;
    }
}

if(dp[even][odd][alice][ite]!=-1) return dp[even][odd][alice][ite];
if(ite%2==0){
int a=3;
if(even>0){a=fun(even-1,odd,alice,!ite);}
int b=3;
if(odd>0){b=fun(even,odd-1,alice+1,!ite);}
if(a==2||b==2){
    return dp[even][odd][alice][ite]=2;
}else{
    return dp[even][odd][alice][ite]=3;
}
}else{
int c=2;
if(even>0){c=fun(even-1,odd,alice,!ite);}
int d=2;
if(odd>0){d=fun(even,odd-1,alice,!ite);}
  if(c==3||d==3){
    return dp[even][odd][alice][ite]=3;
  }else{
    return dp[even][odd][alice][ite]=2;
  }
}
}


signed main(){
TESTLIMITPASSKARADE
factori();
int t;
cin>>t;
while(t--){
int n;
cin>>n;int eve=0,odd=0;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x%2==0){
        eve++;
    }else{
        odd++;
    }
}
memset(dp,-1,sizeof(dp));
int a=fun(eve,odd,0,0);
	if(a%2==0){
        cout<<"Alice"<<endl;
    }else{
        cout<<"Bob"<<endl;
    }
}
}