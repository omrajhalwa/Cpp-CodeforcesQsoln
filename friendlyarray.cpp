#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){

int n,m;
cin>>n>>m;
vector<int>v(n);
vector<int>c(m);
for(int i=0;i<n;i++){
    cin>>v[i];
}for(int &x:c){
    cin>>x;
}

int a=0,b=0;
for(int i=0;i<n;i++){
    a^=v[i];
}
for(int i=0;i<m;i++){
  
    b|=c[i];
}
int d=a;
for(int i=0;i<31;i++){
    
if(((a>>i)&1)==0){
    
    if(((b>>i)&1)==1){
        if(n%2!=0){
        a=a|(1<<i);
        }
        
    }
}
}

cout<<d<<" "<<a<<endl;
}