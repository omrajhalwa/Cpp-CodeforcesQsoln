#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){

int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    vector<int>c(n);
    int sum=0;
    for(int i=0;i<n;i++){
      cin>>v[i];
    }for(int i=0;i<n;i++){
        cin>>c[i];  
    }

vector<int>m;int i=0;
sort(c.begin(),c.end());
while(k>0&&i<c.size()){
    
    m.push_back(k);
    k=k-c[i];i++;
}

int ans=accumulate(m.begin(),m.end(),0);
for(int i=0;i<n;i++){
    v[i]=v[i]-ans;
}
bool give=true;
for(int i=0;i<n;i++){
    if(v[i]>0){
        give=false;
        break;
    }
}


if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}


}
}