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

int n;
cin>>n;
vector<vector<int>>v(n);
set<int>st;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    vector<int>k;
    for(int j=0;j<x;j++){
        int y;
        cin>>y;
        st.insert(y);
        k.push_back(y);
    }
v.push_back(k);
}
int mx=0;
while(!st.empty()){
    int no=*(st.begin());
    st.erase(no);

   map<int,int>mp;

   for(int i=0;i<v.size();i++){
    bool give=true;
    for(int j=0;j<v[i].size();j++){
         if(v[i][j]==no){give=false;}
         mp[v[i][j]]++;
    }
    if(!give){
        for(int j=0;j<v[i].size();j++){
            mp[v[i][j]]--;
        }
    }
   }

int cnt=0;
for(auto it:mp){if(it.second!=0)cnt++;}
if(cnt>mx){mx=cnt;}
}

cout<<mx<<endl;
}
}