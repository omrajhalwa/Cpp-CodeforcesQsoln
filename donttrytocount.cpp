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

signed main(){
TESTLIMITPASSKARADE
factori();
int t;
cin>>t;
while(t--){

int n,m;
cin>>n>>m;
string s="";
cin>>s;
string k="";
cin>>k;
int ans=0;

bool give=false;
for(int i=0;s.size()<=200;i++){
    if(s.find(k)!=string::npos){
       // cout<<s<<endl;
        give=true;
        break;
    }
    ans++;
    s=s+s;
}
	
    if(give){
        cout<<ans<<endl;
    }else{
        cout<<-1<<endl;
    }
}

}