#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mk make_pair
//my soln


int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
map<int,int>v;
for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    v[x]=i;
}
int k=-1;
for(auto i=v.begin();i!=v.end();i++){

for(int j=1;j<=1000;j++){
    auto it=v.find(j);
    

    if(it!=v.end()&&__gcd(i->first,j)==1){
        
        k=max(k,it->second+i->second);
    }
}}

cout<<k<<endl;
}
}