#pragma warning(disable:4996)
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize ("-ffloat-store")
#include<bits/stdc++.h>
using namespace std;
//#define int long long
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





// vector <int> fact (200005);
 
// int binexp(int a,int b){
    
// int result=1;
// while(b>0){
//     if(b&1){
//         result=(result*1LL*a)%mod;
//     }
 
//     a=(a*1LL*a)%mod;
//     b>>=1;
// }
 
// return result;
 
 
// }

// void factori () {
//     fact[0] = 1;
//     for (int i = 1; i < 200005; i++) {
//         fact[i] = (fact[i - 1] * i)%mod;
//     }
// }

// int ncr(int n,int r){
//     if(r>n) return 0;
//     if(r==n) return 1;

//     return ((fact[n]*1LL*binexp(fact[n-r],mod-2)%mod)*1LL*binexp(fact[r],mod-2))%mod; 
// }

signed main(){
TESTLIMITPASSKARADE
//factori();

int n,m,k;
cin>>n>>m>>k;
vector<int>v(15,0);
for(int i=n-1;i>=0;i--){
    cin>>v[i];
}
unordered_map<int,int>hash;
for(int i=0;i<m;i++){
    string s="";
    cin>>s;
   // reverse(s.begin(),s.end());
    int num=0;
    for(int j=0;j<15;j++){
       if(s[j]=='1'){
        num=num|(1<<(n-1-j));
     //   cout<<num<<endl;
       }
    }
    hash[num]++;
}
int siz=(1<<n);
vector<int>valde(siz,0);
for(int i=0;i<siz;i++){
    int sum=0;
for(int j=0;j<15;j++){
    if(((i>>j)&1)==0){
        sum+=v[j];
    }
}
valde[i]=sum;
}









vector<vector<int>>sto(siz,vector<int>(101,0));
for(int i=0;i<siz;i++){
    for(int j=0;j<siz;j++){
        if(hash[j]>0){
            int val=j^i;
            int sum=valde[val];
            
            if(sum<101) sto[i][sum]+=hash[j];
          //  cout<<i<<" "<<sum<<" "<<sto[i][j]<<endl;
        }
    }
}
int ite=sto.size();
for(int i=0;i<ite;i++){
    for(int j=1;j<101;j++){
        sto[i][j]+=sto[i][j-1];
    }
}


while(k--){

 string s="";
    cin>>s;
   // reverse(s.begin(),s.end());
    int num=0;
    for(int j=0;j<15;j++){
       if(s[j]=='1'){
        num=num|(1<<(n-1-j));
     //   cout<<num<<endl;
       }
    }
int b;
cin>>b;
// cout<<num<<endl;
cout<<sto[num][b]<<"\n";
}

om();
}