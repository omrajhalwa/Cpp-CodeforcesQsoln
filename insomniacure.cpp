#include<bits/stdc++.h>
using namespace std;

int main(){
int k,l,m,n,d;
cin>>k>>l>>m>>n>>d;
vector<int>v(d);
for(int i=0;i<d;i++){
    v[i]=i+1;
}
for(int i=0;i<d;i++){
    if(v[i]%k==0||v[i]%l==0||v[i]%m==0||v[i]%n==0){
        v[i]=0;
    }else{
        v[i]=1;
    }
}

int sum=accumulate(v.begin(),v.end(),0);

cout<<d-sum<<endl;




}