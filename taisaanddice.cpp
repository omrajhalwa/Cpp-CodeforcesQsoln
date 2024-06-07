#include<bits/stdc++.h>
using namespace std;

int main(){
int t;cin>>t;while(t--){
int n,s,r;
cin>>n>>s>>r;
int k=s-r;



int l=n-1;
vector<int>v;
while(l--){
    v.push_back(r/(n-1));
}
if(r%(n-1)!=0){
   int j=r%(n-1);
    for(int i=0;i<v.size()&&j>0;i++){
        v[i]++;
        j--;
    }
}


for(auto it:v){cout<<it<<" ";}cout<<k<<endl;
}
}