#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n,k;
cin>>n>>k;
vector<int>v(n);
for(int &x:v){cin>>x;}
vector<int>h(n);
for(int &y:h){cin>>y;}

int i=0,j=0;int sum=0;int ans=0;
while(j<n){

if(j==0||h[j-1]%h[j]!=0){
sum=v[j];
i=j;
}else if(h[j-1]%h[j]==0){
    sum+=v[j];
}

while(sum>k){
    sum-=v[i];
    i++;
}


ans=max(ans,j-i+1);
j++;
}


cout<<ans<<endl;


}

}