#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
int t;cin>>t;
while(t--){
int n,m,d;
cin>>n>>m>>d;
vector<int>v(m);
for(int &x:v)cin>>x;
map<int,int>mp;int p=n;


int cnt=0,k=1;
for(int i=0;i<=m;i++){
    if(i<m){
cnt+=(v[i]-1-k)/d+1;
k=v[i];
    }else{
        cnt+=(n-k)/d;
    }
}
for(int i= m-1;i>=0;i--){
    
        int a1=0,a2=0,b=0;
        
        a1=(p-v[i])/d+1;
        if(i>0)a2=(p-v[i-1])/d+1;
        else{a2=(p-1)/d+1;}
       if(i>0) b=(v[i]-1-v[i-1])/d+1;
       else if(v[i]!=1){ b=(v[i]-1-1)/d+1;}
       // cout<<a1<<" "<<a2<<" "<<b<<endl;
    mp[(a2-b)-a1]++;

p=v[i]-1;
}

int min=INT64_MAX,freq=0;
for(auto it:mp){
    if(it.first<min){
       freq=it.second;
       min=it.first;
    }else if(it.first==min){
        freq=max(freq,it.second);
    }
    }
if(v[0]!=1)cnt++;
cout<<cnt+min<<" "<<freq<<endl;
}

}