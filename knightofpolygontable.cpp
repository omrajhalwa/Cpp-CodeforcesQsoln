#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){

int n,k;cin>>n>>k;

vector<pair<int,int>>p(n);
vector<int>v(n);
for(int i=0;i<n;i++){
    int x;cin>>x;
    p[i].first=x;
    v[i]=x;
}for(int i=0;i<n;i++){
    int x;cin>>x;
     p[i].second=x;
}
sort(p.begin(),p.end());

int take=0, sum=0;
priority_queue<int, vector<int>, greater<int>>pq;
int mn=0,mx=0;map<int,int>mp;
for(int i=0;i<n;i++){
if(i>0){pq.push(p[i-1].second);take++;}

 sum+=p[i].second;
 
 
 if(take>k&&!pq.empty()){
   
    sum-=pq.top();
    pq.pop();
    take--;
 }

mp[p[i].first]=sum;
}

for(int i=0;i<n;i++){
cout<<mp[v[i]]<<" ";
}

}