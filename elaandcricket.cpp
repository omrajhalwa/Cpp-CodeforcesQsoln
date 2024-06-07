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
map<int,int>mp;
map<int,int>m;
vector<int>v;

bool give=true;
int mx=0;
for(int i=0;i<6;i++){
    int x=0;
    cin>>x;
v.push_back(x);
  if(i%2==0){
    mp[x]++;
  }else{
    m[x]++;
  }
}

int x=-1,y=-1;
int mn1=1e9,mn2=1e9;
for(auto it:mp){
    if(it.second<mn1){
        mn1=it.second;
        x=it.first;
    }
}for(auto it:m){
    if(it.second<mn2){
        mn2=it.second;
        y=it.first;
    }
}

 int r1=-1,c1=-1;
 for(int i=0;i<6;i+=2){
    int l=v[i],u=v[i+1];
    if((l==1&&u==1)||(l==1&&u==n)||(l==n&&u==1)||(l==n&&u==n)){
        r1=l;
        c1=u;
        give=false;
    }
 }
  
//cout<<x<<" "<<y<<endl;

    int p,q;
    cin>>p>>q;
   //cout<<r1<<" "<<c1<<endl;
    if(!give){
        if(r1==p||c1==q){
            cout<<"YES"<<endl;
        }else{
        cout<<"NO"<<endl;
    }
    }
    else if(p%2==x%2&&q%2==y%2){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}
}