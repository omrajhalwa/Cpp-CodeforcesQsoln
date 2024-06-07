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

string s="";
cin>>s;
int pos;
cin>>pos;
map<pair<char,int>,int>mp;
for(int i=0;i<s.size();i++){
mp[{s[i],i}]++;
}
int n=s.size();
int ini=1,fin=n,cnt=0,loc=-1;
for(int i=0;i<n;i++){
   // cout<<ini<<fin<<endl;
if(ini<=pos&&pos<=fin){
cnt=i;
loc=pos-ini;
}
    ini=fin+1;
    fin=fin+n-(i+1);

}
set<pair<char,int>, greater<pair<char,int>>>st;
//cout<<cnt<<" ";
int counter=0;
bool give=true;
for(int i=0;i<n&&give;i++){
if(!st.empty()){

    auto it=*(st.begin());
   
    while(!st.empty()&&it.first>s[i]&&give&&counter<cnt){
        //cout<<it.first<<" "<<s[i];
        mp[{it.first,it.second}]--;
        counter++;
       
        
        st.erase(st.begin());
        if(!st.empty()){
            it=*(st.begin());
        }
        if(counter==cnt){
            give=false;
        }
        
    }
}
st.insert({s[i],i});
}

 counter=0;char ans;
//cout<<loc<<endl;

for(int i=0;i<s.size();i++){
if(mp[{s[i],i}]>0){
  //  cout<<s[i];
    if(counter==loc){
        ans=s[i];
        break;
    }
    counter++;
}
}
cout<<ans;

}
}