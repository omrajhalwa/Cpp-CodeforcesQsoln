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

const int N=1e7+10;
vector<bool>isprime(N,1);
vector<int>lp(N,0),hp(N,0);

signed main(){
    
factori();
int tAsti=1;
TESTLIMITPASSKARADE


isprime[0]=isprime[1]=false;

for(int i=2;i<=N;i++){
    if(isprime[i]==true){
        lp[i]=hp[i]=i;
        for(int j=2*i;j<N;j+=i){
            isprime[j]=false;
            hp[j]=i;
            if(lp[j]==0){
                lp[j]=i;
            }
        }
    }
}


auto uttar=[&](){
//looosers codde.....








int n,k;
cin>>n;


auto it=[&](int x,int &p){
unordered_map<int,int>prime_factors;


while(x>1){
    int prime_factor=hp[x];if(prime_factor>n)return false;
    while(x%prime_factor==0){
        x/=prime_factor;
        prime_factors[prime_factor]++;
    }
}

p=prime_factors.size();
return true;
};




int ans=0;
int prev=1;
for(int i=1;i<=100;i++){
    int p=0;
    if(it(n*i+1,p)){
        if(p>ans){
         ans=p;
         prev=n*i+1;
        }
        
    }
}

vector<int>a; 
for(int i=1;i<n;i++){
    if(prev%i==0){
        prev/=i;
        a.push_back(i);
    }
}

if(prev>1){
cout<<1<<endl;
cout<<1<<endl;
}else{
   
cout<<a.size()<<endl;
for(auto itt:a){
    cout<<itt<<" ";
}cout<<endl;
}
};



int N=1;
// cin>>N;
while(tAsti<=N){
uttar();
tAsti++;
}

om();
}