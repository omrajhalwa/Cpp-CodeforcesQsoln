#include<bits/stdc++.h>
using namespace std;
#define int long long
#define shree signed
#define ganesh main
#define ll long long
#define endl "\n"
#define RAM_RAM_BAJARANG_BALI std::ios sync_with_stdio (NULL); cin.tie(0); cout.tie(0);
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
 
/*FACTORIAL   POWERFUN   DELHI NCR*/
 
vector <int> fact (9000005);
 
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
    for (int i = 1; i < 9000005; i++) {
        fact[i] = (fact[i - 1] * i)%mod;
    }
}
 
inline int ncr(re int n,re int r){
    if(r>n) return 0;
    if(r==n) return 1;
 
    return ((fact[n]*1LL*binexp(fact[n-r],mod-2)%mod)*1LL*binexp(fact[r],mod-2))%mod; 
}


struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
 
// /*.....................................................................................................*/
 
// /*....PERFECT SQURE,GCD,LCM,REVERSE NO...........*/
 
// inline int rev(re int n){
//     int x=0;
//     while(n>0){
//     int r=n%10;
//     n=n/10;
//     x=x*10+r;
// }
//  return x;
// }
 
 
 
 
// inline bool isPerfectSquare(re long double x)
// {
//     // Find floating point value of
//     // square root of x.
//     if (x >= 0) {
 
//         long long sr = sqrt(x);
         
//         // if product of square root 
//         //is equal, then
//         // return T/F
//         return (sr * sr == x);
//     }
//     // else return false if n<0
//     return false;
// }
// inline int __gcd(re int x,re int y){
//     return y?__gcd(y,x%y):x;
// }
// inline int lcm(re int a,re int b){
// return a*1LL*b/__gcd(a,b);
// }
// /*...................................................*/
// /*LETS DEBUG THE VECTOR....................................*/
// inline void dub(vector<int>&v){
    
//     for(auto it:v){
//         cout<<it<<" ";
//     }cout<<endl;
// }
// /*.........................................................*/
 
// // TWO SE KAAM NA CHALE TO KABHI KABHI FOUR SE CHECK
// /* BIPARTITE DFS */
 
// bool dfs(int node,int col,int color[],vector<int>adj[]){
 
 
 
//     color[node]=col;
 
//     for(auto it:adj[node]){
    
//         if(color[it]==-1){
//             if(dfs(it,!col,color,adj)==false){
//                 return false;
//             }
//         }else if(color[it]==color[node]){
//                 return false;
//             }
        
//     }
 
 
//     return true;
// }
 
// /*..........................................................*/

// /*PRIME FACTOR IN SQRT(N)*/
 
// inline vector<int> primeFactors(int n)  
// {  
//     vector<int>ans;
   
//     while (n%2 == 0)  
//     {  
//        ans.push_back(2); 
//         n = n/2;  
//     }  
     
    
//     for (int i = 3; i*i <= (n); i = i+2)  
//     {  
//         // While i divides n, print i and divide n  
//         while (n%i == 0)  
//         {  
//            ans.push_back(i);  
//             n = n/i;  
//         }  
//     }  
     
    
//     if (n > 2)  ans.push_back(n); 
 
 
//     return ans;
// }  
 
// /*.......................................................*/
 
// /* SIEVE GO ERATHOSENE WITH LOWEST PRIME AND HIGHEST PRIME FACTOR UPTO 1E7 AND LOG N FIND PRIME FACTOR OF A NUMBER*/
// const int N=5e6+10;
// vector<int>isprime(N,1);
// vector<int>lp(N,0),hp(N,0);
 
 
 
// inline void  Seive() {
//     isprime[0]=isprime[1]=0;
 
// for(int i=2;i<N;i++){
//     if(isprime[i]==true){
//         lp[i]=hp[i]=i;
//         for(int j=2*i;j<N;j+=i){
//             isprime[j]=false;
//             hp[j]=i;
//             if(lp[j]==0){
//                 lp[j]=i;
//             }
//         }
//     }
// }
 
 
 
 
// int num=1;
// // log(n) de primefactors of num
 
 
// unordered_map<int,int>prime_factors;
 
// while(num>1){
//     int prime_factor=hp[num];
//     while(num%prime_factor==0){
//      num/=prime_factor;
//      prime_factors[prime_factor]++;
//     }
// }
 
// }
 
// /*......................................................*/
 
// /* COMPARATOR CAN USE FOR SET AND OTHER DATA STRUCTURE*/
 
// struct comp{
 
//     bool operator () (pair<int,pair<int,int>>a, pair<int,pair<int,int>> b) const {
//         if(a.first!=b.first){
 
//         return b.second>a.second;
//         }
//        if(a.second.first!=b.second.first){
//         return a.second.first>b.second.first;
//        }else{
//         return a.second.second>b.second.second;
//        }
     
//     }
// };
 
// /*......................................................*/
 
// /*
// CODE FOR FINDING DISJOINT NO OF CYCLE
// vector<vector<int>>dp(n+1,vector<int>(3,0));
// for(int i=0;i<n;i++){
//     cin>>v[i].second;
//     dp[v[i].first][0]=v[i].second;
//     dp[v[i].second][1]=v[i].first;
// }
 
// int cnt=0;
// vector<vector<int>>vis(n+1,vector<int>(3,0));
 
// for(int i=0;i<n;i++){
//     int node=v[i].first;
//     int col=0;
//     if(vis[node][col]==0)cnt++;
//   while(vis[node][col]==0){
//     vis[node][col]=1;
    
//     node=dp[node][col];
   
//   }
  
// }
 
// CNT IS ANS;
// */
// /*FIND K STRING SUB PRESENT IN  OR NOT */
// inline int subsequence(string &s,string &k){
// int cnt=0;
// int i=0,j=0;
// int n=s.size();
// int m=k.size();
// while(i<n&&j<m){
// if(s[i]==k[j]){
// j++;cnt++;
// }
// i++;
// }
 
 
// return cnt;
// }
// /*................................................*/
// const int Num=1e7+5;
 
 
// inline int countDigit(long long n) {  
//   return floor(log10(n) + 1);  
// } 

// vector<int> findNextSmallerElement(const std::vector<int>& arr) {
   
//   // declaring vector for storing next smaller element
//     vector<int> result(arr.size(), arr.size());  
 
//   // declaring a stack
//     stack<int> st;  
 
//   // iterating through array 
//     for (int i = 0; i < arr.size(); ++i) {
       
//       // checking for next smaller element
//         while (!st.empty() && arr[i] < arr[st.top()]) {
           
//           // pushing the next smaller element
//             result[st.top()] = i;
           
//             st.pop();
//         }
 
//         // pushing elements of array in stack
//         st.push(i);
//     }
 
//     return result;
// }


// class DSU {
//     public:
//     vector<int>rank,parent,size;

//     DSU(int n){
//         rank.resize(n+1,0);
//         parent.resize(n+1);
//         size.resize(n+1);
//         for(int i=0;i<=n;i++){
//             parent[i]=i;
//             size[i]=1;
//         }
//     }

//     int findUPar(int node){
//         if(node==parent[node]) return node;

//         return parent[node]=findUPar(parent[node]);
//     }

//     void unionByRank(int u,int v){
//         int ulp_u=findUPar(u);
//         int ulp_v=findUPar(v);
//         if(ulp_u==ulp_v) return;

//         if(rank[ulp_u]<rank[ulp_v]){
//             parent[ulp_u]=ulp_v;
//         }else if(rank[ulp_v]<rank[ulp_u]){
//             parent[ulp_v]=ulp_u;
//         }else{
//             parent[ulp_v]=ulp_u;
//             rank[ulp_u]++;
//         }
//     }

//     void unionBySize(int u,int v){
//         int ulp_u=findUPar(u);
//         int ulp_v=findUPar(v);
//         if(ulp_u==ulp_v) return;

//         if(size[ulp_u]<size[ulp_v]){
//             parent[ulp_u]=ulp_v;
//             size[ulp_v]+=size[ulp_u];
//         }else{
//             parent[ulp_v]=ulp_u;
//             size[ulp_u]+=size[ulp_v];
//         }
//     }
// };



vector<int> topologicalSort(vector<int>adj[],
                            int V)
{
    // Vector to store indegree of each vertex
    vector<int> indegree(V+1);
    for (int i = 1; i <= V; i++) {
        for (auto it : adj[i]) {
            indegree[it]++;
        }
    }
 
    // Queue to store vertices with indegree 0
    queue<int> q;
    for (int i = 1; i <= V; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }
    vector<int> result;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        result.push_back(node);

        for (auto it : adj[node]) {
            indegree[it]--;
           
            // If indegree becomes 0, push it to the queue
            if (indegree[it] == 0)
                q.push(it);
        }
    }
 
    // Check for cycle
    if (result.size() != V) {
       // cout << "Graph contains cycle!" << endl;
        return {};
    }
 
    return result;
}


 
shree ganesh(){
// Seive(); 
// factori();
int tAsti=1;
RAM_RAM_BAJARANG_BALI
 
 
 
 
 
auto jai_shree_ram=[&](){

// DEEN DAYAL VIRADHU SAMBHARI HARAU NATH MUM SANKAT BHARI..............
// SABAHI SINDHU GAHI PAD PRABHU KERE CHAMHU NATH SAB ABGUN MERE...........

//LET IT BE EX
//you noob, i think you made wrong answer in any testcase;

 

// function<void(int ver)>bfs=[&](int ver){ 
  
// };


 // function<bool(int row,int col,int parrow,int parcol,int ch)>dfs=[&](int row,int col,int parrow,int parcol,int ch){ 
     
    
 // };

int n;
cin>>n;


string s="";
cin>>s;
map<char,int>mp;

for(int i=0;i<s.size();i++){
     mp[s[i]]++;
}
string k="";
for(auto it:mp){

k.push_back(it.first);
}

map<char,char>mp2;
for(int i=0;i<k.size()/2;i++){
    mp2[k[i]]=k[n-i-1];
    mp2[k[n-i-1]]=k[i];
}


string ans="";
for(auto it:s){
    ans.push_back(mp2[it]);
}
cout<<ans<<endl;



};
 

 
int N=1;
cin>>N;
while(tAsti<=N){
jai_shree_ram();
tAsti++;
}
 
om();
}
