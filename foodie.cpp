#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
while(t--){
    
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
       cin>>v[i];
       mp[v[i]]++;
    } vector<int>c(100001,200001);
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        if(b<c[v[i]]){
    c[v[i]]=b;}
    }
  vector<int>x;
  int op=0;
  for(auto it:mp){
      x.push_back(c[it.first]);
      op++;
  }
    sort(x.begin(),x.end());
    
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=x[i];
    }
    if(op>=k)
    cout<<sum<<endl;
    else
    cout<<-1<<endl;
}
	return 0;
}