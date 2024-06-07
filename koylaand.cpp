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
    if(r==0) return 1;
    if(r==1) return n;

    return fact[n]*1LL*binexp(fact[n-r],mod-2)*1LL*binexp(fact[r],mod-2); 
}


signed main(){
TESTLIMITPASSKARADE
factori();

int t;
cin>>t;
while(t--){
int n,m,k;
cin>>n>>m>>k;
vector<int>v(n);
for(int &x:v){cin>>x;}


multiset<int>st;
int sum=0;
int ans=0;
for(int i=0;i<n;i++){
    if(st.size()<m&&v[i]>=0){
       st.insert(v[i]);
       sum+=v[i];
       ans=max(ans,sum-k*(i+1));
    }else{
        int mn=*(st.begin());
        if(mn<v[i]){
            st.erase(st.begin());
            st.insert(v[i]);
            sum-=mn;
            sum+=v[i];
            //cout<<i<<" "<<mn<<" "<<sum<<endl;
            ans=max(ans,sum-(k*(i+1)));
        }
    }


    
}

cout<<ans<<endl;

}
}