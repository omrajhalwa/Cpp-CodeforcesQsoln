#include<bits/stdc++.h>
using namespace std;
#define int long long
#define M 1000000007 



signed main(){


int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n);int pro=1;
for(int i=0;i<n;i++){
  cin>>v[i];
  
}
int two=0;
for(int i=0;i<n;i++){

int l=v[i];
while(l%2==0&&l>0){
  two++;
  l=(l/2)%M;
}

}

vector<int>req;
for(int i=n;i>=1;i--){
int k=i;int p=0;
while(k%2==0&&k>0){
  p++;
  k=(k/2)%M;
}

if(p!=0){
  req.push_back(p);
}
}

sort(req.begin(),req.end());
int ans=0,i=req.size()-1;
while(n>two&&i>=0&&req.size()>0){
ans++;
two+=req[i];
i--;
}


if(two<n){
  cout<<-1<<endl;
}else{
  cout<<ans<<endl;
}
}
}