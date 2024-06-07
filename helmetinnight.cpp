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


bool cmp(pair<int,int>a,pair<int,int>b){


if(a.first>b.first) return false;
if(a.first==b.first){
    return a.second>b.second;
}


return true;
}

signed main(){
TESTLIMITPASSKARADE
factori();
	int t;
    cin>>t;
    while(t--){

    int n;
    int p;
    cin>>n>>p;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].second;
    }for(int i=0;i<n;i++){
        cin>>v[i].first;
    }


    sort(v.begin(),v.end(),cmp);

queue<pair<int,int>>q;
int k=n-1;int ans=p,i=1;
q.push({v[0].first,v[0].second});
for(;k--;){
if(q.front().first<p){
ans+=q.front().first;
q.front().second--;
}else{
    ans+=p;
}

q.push({v[i].first,v[i].second});i++;
if(q.front().second==0){
    q.pop();
}
}


cout<<ans<<endl;

}
}