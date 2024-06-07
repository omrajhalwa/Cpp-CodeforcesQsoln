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
int T;
cin>>T;
for(int t=1;t<=T;t++){
int n;
cin>>n;
string s="";
cin>>s;
vector<int>v(n+2,0);

int q;
cin>>q;
vector<int>query(q);
map<int,int>mp;
for(int i=0;i<q;i++){
cin>>query[i];
mp[query[i]]++;
}

for(auto it:mp){
    for(int j=it.first;j<=n;j+=it.first){
       v[j]+=it.second;
    }
}

for(int i=1;i<=n;i++){

    if(v[i]%2==1){
        
        if(s[i-1]=='0'){s[i-1]='1';}
        else{s[i-1]='0';}
    }
}

int ans=0,cnt=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
        cnt++;
    }
}

for(int i=0;i<n&&cnt!=0;i++){
    if(s[i]=='1'){
        
    for(int j=i;j<n;j+=(i+1)){
        if(s[j]=='0'){s[j]='1';cnt++;}
        else{s[j]='0';cnt--;}
    }



   ans++;
    }

if(cnt==0){
    break;
}
}
cout<<"Case #"<<t<<": ";
cout<<ans<<endl;

}


}