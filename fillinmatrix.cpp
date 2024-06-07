#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n,m;
cin>>n>>m;
vector<vector<int>>v(n,vector<int>(m,0));

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
       
        v[i][j]=j;
        
    }

if(m>1){
int k=i%(m-1)+1;

       k=k%m;
       
     reverse(v[i].begin(),v[i].end());
     reverse(v[i].begin(),v[i].begin()+k);
     reverse(v[i].begin()+k,v[i].end());
       }
}



if(m==1){
    cout<<0<<endl;
}
else if(n<m){
    cout<<n+1<<endl;
}else{
    cout<<m<<endl;
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<v[i][j]<<" ";
    }cout<<endl;
}

}
}