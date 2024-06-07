#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){


int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}


int p=0,k=-1;


for(int i=0;i<n;i++){

if(i==0&&v[i]!=0){
    k=1;break;
}


    if(p<v[i]&&v[i]==p+1){
        p=v[i];
    }else if(v[i]<=p){
    }else{
        k=i+1;
        break;
    }
}

cout<<k<<endl;



}