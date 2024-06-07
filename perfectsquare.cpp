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
int n;
cin>>n;
vector<string>v;

for(int i=0;i<n;i++){
    string s="";
    cin>>s;
    v.push_back(s);
}
vector<string>a(n);
vector<string>b(n);
vector<string>c(n);


int ans=0;
for(int i=0,k=n-1,r=n-1,t=n-1;i<n;i++,t--,k--,r--){
    for(int j=0,p=0,s=0,q=n-1;j<n;j++,p++,q--,s++){
       int p1=v[i][j]-'a';
       int p2=v[p][k]-'a';
       int p3=v[r][s]-'a';
       int p4=v[t][q]-'a';
       
       int mx=max(p1,max(p2,max(p3,p4)));
       ans+=4*mx-p1-p2-p3-p4;
       v[i][j]=mx+'a';
       v[p][k]=mx+'a';
      v[r][s]=mx+'a';
       v[t][q]=mx+'a';
       
    }
}




cout<<ans<<endl;

}
}