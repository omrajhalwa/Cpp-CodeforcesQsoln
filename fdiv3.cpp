#include<bits/stdc++.h>
using namespace std;
#define int long long
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

// TWO SE KAAM NA CHALE TO KABHI KABHI FOUR SE CHECK


int dfs(int node,int par,vector<int>adj[],vector<int>&hash,vector<int>&ans){



for(auto child:adj[node]){
    if(par!=child){
        
        if(node!=-1){
            if(hash[node]==1){
                ans[node]=max(ans[node],0LL);
            }if(ans[node]>=0){
              ans[child]=max(ans[child],ans[node]+1);
            }
        }
        dfs(child,node,adj,hash,ans);
    }
}



}
signed main(){
    
factori();
int tAsti=1;
TESTLIMITPASSKARADE

auto uttar=[&](){
//looosers codde.....

    int k,n;
    cin>>k>>n;
    vector<int>v(n+1);
    vector<int>hash(k+4,-1e9);
    int pp=-1;
    for(int i=0;i<n;i++){
        cin>>v[i];
        pp=v[i];
        hash[v[i]]=1;
    }


vector<int>adj[k+10];
for(int i=0;i<k-1;i++){
    int a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
}


auto bfs=[&](int node){

queue<int>q;
vector<int>vis(k+10,0);
q.push(node);
vis[node]=1;
int ans=node;
while(!q.empty()){

ans=q.front();
if(hash[q.front()]==1){
    node=q.front();
}
q.pop();


for(auto child:adj[ans]){
    if(!vis[child]){
        q.push(child);
        vis[child]=1;
    }
}

}

return node;

};


int node1=bfs(pp);
int node2=bfs(node1);
//cout<<node1<<" "<<node2<<endl;
vector<int>ans(k+1,-1);
vector<int>ans2(k+1,-1);

dfs(node1,-1,adj,hash,ans);
dfs(node2,-1,adj,hash,ans2);
int mn=INT_MAX;
for(int i=1;i<=k;i++){
   mn=min(mn,max(ans[i],ans2[i]));
}

if(mn==-1){cout<<0<<endl;}else cout<<mn<<endl;
};



int N=1;
cin>>N;
while(tAsti<=N){
uttar();
tAsti++;
}

om();
}