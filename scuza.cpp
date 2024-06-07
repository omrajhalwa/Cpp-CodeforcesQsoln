#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
map<int,int>arr;
int n,q;
cin>>n>>q;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];

}
int mn=v[0],sum=v[0];
arr[mn]=0;
vector<int>c;
c.push_back(mn);
for(int i=1;i<n;i++){

if(mn<v[i]){
   c.push_back(v[i]);
    mn=v[i];
    arr[mn]=sum;
    sum+=v[i];
    
}else{

    sum+=v[i];
}


}

int o=1;sort(c.begin(),c.end());
for(int i=0;i<q;i++){
cin>>o;

auto it=upper_bound(c.begin(),c.end(),o);

if(it==c.end()){
    cout<<sum<<" ";
}else{
    
    cout<<arr[c[it-c.begin()]]<<" ";
}

}

cout<<endl;

}

}