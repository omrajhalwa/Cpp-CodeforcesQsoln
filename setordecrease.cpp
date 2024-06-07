#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define TESTLIMITPASSKARADE std::ios sync_with_stdio (NULL); cin.tie(0); cout.tie(0);
#define re register
int mod=1e9+7;
#define imx INT64_MAX
#define imn INT64_MIN
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





vector <int> fact (1000005);
 
inline int binexp(re int a,re int b){
    
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

inline void factori () {
    fact[0] = 1;
    for (int i = 1; i < 1000005; i++) {
        fact[i] = (fact[i - 1] * i)%mod;
    }
}

inline int ncr(re int n,re int r){
    if(r>n) return 0;
    if(r==n) return 1;

    return ((fact[n]*1LL*binexp(fact[n-r],mod-2)%mod)*1LL*binexp(fact[r],mod-2))%mod; 
}




inline int rev(re int n){
    int x=0;
    while(n>0){
    int r=n%10;
    n=n/10;
    x=x*10+r;
}
 return x;
}

 


inline bool isPerfectSquare(re long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
        // if product of square root 
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}
inline int __gcd(re int x,re int y){
    return y?__gcd(y,x%y):x;
}
inline int lcm(re int a,re int b){
return a*1LL*b/__gcd(a,b);
}

// TWO SE KAAM NA CHALE TO KABHI KABHI FOUR SE CHECK



signed main(){
    
factori();
int tAsti=1;
TESTLIMITPASSKARADE

auto uttar=[&](){
//looosers codde.....

int n,k;
cin>>n>>k;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());

vector<int>pre(n+2,0);
pre[0]=v[0];
for(int i=1;i<n;i++){
pre[i]+=pre[i-1]+v[i];
}
int mn=imx;
for(int i=0;i<n;i++){

    int start=0,end=1e12;
    int ans=1e18;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(pre[i]-mid+(v[0]-mid)*1LL*(n-i-1)<=k){
            
              ans=mid+n-i-1;
              end=mid-1;
        }else{
            start=mid+1;
        }
    }
// cout<<ans<<" ";
    mn=min(mn,ans);
}
if(k>=pre[n-1]){
    cout<<0<<endl;
}else{
cout<<mn<<endl;
}
};



int N=1;
cin>>N;
while(tAsti<=N){
uttar();
tAsti++;
}

om();
}