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

const int N=1e7+10;
vector<int>isprime(N,1);
vector<int>lp(N,0),hp(N,0);





signed main(){
TESTLIMITPASSKARADE
factori();

isprime[0]=isprime[1]=0;

for(int i=2;i<N;i++){
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

int t;
cin>>t;
while(t--){

int n;
cin>>n;
vector<int>v(n);
for(int &x:v){
    cin>>x;
}
unordered_map<int,int>prime_factors;
for(int i=0;i<n;i++){
int num;
num=v[i];

//unordered_map<int,int>prime_factors;

while(num>1){
    int prime_factor=hp[num];
    while(num%prime_factor==0){
     num/=prime_factor;
     prime_factors[prime_factor]++;
    }
}

}

bool give=true;
for(auto it:prime_factors){
    if(it.second%n!=0){
        give=false;
    }
}
	
    if(give){
        cout<<"YES"<<endl;
     }else{
        cout<<"NO"<<endl;
     }

}
}