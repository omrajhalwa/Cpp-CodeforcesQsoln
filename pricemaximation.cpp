#pragma warning(disable:4996)
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize ("-ffloat-store")
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define TESTLIMITPASSKARADE std::ios sync_with_stdio (NULL); cin.tie(0); cout.tie(0);

int mod=998244353;
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



signed main(){
TESTLIMITPASSKARADE
//factori();
int p=0;int t;
cin>>t;
while(p<t){
int n,k;
cin>>n>>k;
vector<int>v(n);
vector<int>c;
vector<int>hash(n,1);
multiset<int,greater<int>>mxheap;
multiset<int>mnheap;
for(int &x:v){
    cin>>x;
}
c=v;
int ans=0;
sort(v.begin(),v.end());
for(int i=n-1;i>=0;i--){
ans+=v[i]/k;
v[i]=v[i]%k;
}

for(auto it:v){
    mnheap.insert(it);
    mxheap.insert(it);
}
while(!mxheap.empty()){
    int a=*(mxheap.begin());
    mxheap.erase(mxheap.begin());
    mnheap.erase(mnheap.find(a));
 
    
    int val=(k-a);
    
    auto itt=mnheap.lower_bound(val);
    int c;
   if(itt!=mnheap.end()) c=*(mnheap.lower_bound(val));
   else c=*(mnheap.begin());
    mxheap.erase(mxheap.find(c));
    mnheap.erase(mnheap.find(c));
   // cout<<a<<" "<<b<<" "<<c<<endl;
    ans+=(a+c)/k;
 

}

cout<<ans<<endl;
p++;
}
om();
}