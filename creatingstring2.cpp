#include<bits/stdc++.h>
using namespace std;
#define int long long
#define TESTLIMITPASSKARADE std::ios sync_with_stdio (NULL); cin.tie(0); cout.tie(0);

int mod=1e9+7;


//  jai shree ram......
// jai bajrangbali....



/*
vector<int> a(n);
multiset<int> s(a.begin(), a.end());



*/






vector <int> fact (2000005);
 
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
    for (int i = 1; i < 2000005; i++) {
        fact[i] = (fact[i - 1] * i)%mod;
    }
}


signed main(){
TESTLIMITPASSKARADE
factori();

string s="";
cin>>s;
map<char,int>mp;
for(int i=0;i<(1LL)*s.size();i++){
mp[s[i]]++;

}

int ans=fact[s.size()];
//cout<<ans;
for(auto it:mp){
    ans=(ans*1LL*binexp(fact[it.second],mod-2))%mod;
   // cout<<ans<<" ";
}
	
    cout<<ans;
}