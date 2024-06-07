
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
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

inline void dub(vector<int>&v){
    cout<<"size: "<<v.size()<<endl;
    cout<<"value: ";
    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;
}

// TWO SE KAAM NA CHALE TO KABHI KABHI FOUR SE CHECK

bool dfs(int node,int col,int color[],vector<int>adj[]){
 
 
 
    color[node]=col;
 
    for(auto it:adj[node]){
    
        if(color[it]==-1){
            if(dfs(it,!col,color,adj)==false){
                return false;
            }
        }else if(color[it]==color[node]){
                return false;
            }
        
    }
 
 
    return true;
}


inline vector<int> primeFactors(int n)  
{  
    vector<int>ans;
   
    while (n%2 == 0)  
    {  
       ans.push_back(2); 
        n = n/2;  
    }  
     
    
    for (int i = 3; i <= sqrt(n); i = i+2)  
    {  
        // While i divides n, print i and divide n  
        while (n%i == 0)  
        {  
           ans.push_back(i);  
            n = n/i;  
        }  
    }  
     
    
    if (n > 2)  ans.push_back(n); 


    return ans;
}  





// int dfs(int node,int val,vector<int>&vis,vector<int>adj[],vector<vector<int>>&v){

// if(vis[node]==1)return 0;
// vis[node]=1;
// int res=0;


//     for(auto child:adj[node]){
//         int mx=0;
//         if(!vis[child]){
//        mx=max(mx,dfs(child,0,vis,adj,v)+abs(v[node][val]-v[child][0]));
//        mx=max(mx,dfs(child,1,vis,adj,v)+abs(v[node][val]-v[child][1]));
       
      
//          res+=mx;
    
//      }
//     }
// cout<<node<<" "<<res<<endl;
//     return res;
// }


  // sieve of erathosene
const int N=1e7+10;
vector<int>isprime(N,1);
vector<int>lp(N,0),hp(N,0);



inline void  Seive() {
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




int num=1;
// log(n) de primefactors of num
 

unordered_map<int,int>prime_factors;
 
while(num>1){
    int prime_factor=hp[num];
    while(num%prime_factor==0){
     num/=prime_factor;
     prime_factors[prime_factor]++;
    }
}

}




signed main(){
   // Seive(); 
factori();
int tAsti=1;
TESTLIMITPASSKARADE

auto uttar=[&](){
//looosers codde.....
// DEEN DAYAL VIRADHU SAMBHARI HARAU NATH MUM SANKAT BHARI..............
// SABAHI SINDHU GAHI PAD PRABHU KERE CHAMHU NATH SAB ABGUN MERE...........
// bad performances
int n,m;
cin>>n>>m;
vector<string>v;
for(int i=0;i<n;i++){
string s="";
cin>>s;
v.push_back(s);

}


if(n>2){
for(int i=n-1;i>=2;i--){
    for(int j=0;j<m;j++){
if(v[i][j]=='1'){
    v[i-1][j]='1';
}

}
}

}
int one=0,zero=0;
for(int i=0;i<m;i++){
if(v[1][i]=='1'){
    if(v[0][i]=='1'){
        one++;
    }else{
        zero++;
    }
}
}
cout<<one<<" "<<zero<<endl;
cout<<ncr(one+zero,one)<<endl;

};



int N=1;
 cin>>N;
while(tAsti<=N){
uttar();
tAsti++;
}

om();
}

