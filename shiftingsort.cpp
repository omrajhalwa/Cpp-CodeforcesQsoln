#include<bits/stdc++.h>
using namespace std;

signed main(){
  int t;
  cin>>t;while(t--){
int n;cin>>n;
vector<int>v(n);
vector<int>c(n);
for(int i=0;i<n;i++){
  cin>>v[i];
  c[i]=v[i];
}
sort(c.begin(),c.end());
vector<pair<pair<int,int>,int>>vec;
for(int i=0;i<n;i++){
  if(v[i]!=c[i]){
    int k;
    for(int j=i+1;j<n;j++){
      if(v[j]==c[i]){
        k=j-i;
        break;
      }
    }
vec.push_back(make_pair(make_pair(i+1,n),k));
    while(k--){
   int p=v[i];
   for(int j=i;j<n-1;j++){
      v[j]=v[j+1];
   }
   v[n-1]=p;

    }
  }
}
cout<<vec.size()<<endl;
for(auto it:vec){
  cout<<it.first.first<<" "<<it.first.second<<" "<<it.second<<endl;
}


}
}