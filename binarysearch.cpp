#include<bits/stdc++.h>
using namespace std;

int main(){
long long int n,m,a,b;
vector<long long int>v;
vector<long long int>s;
cin>>n>>m;
for(int i=0;i<n;i++){
    cin>>a;
    v.push_back(a);
}
long long int l,r,mid;
 l=0;r=n-1;mid=(l+r)/2;
for(int i=0;i<m;i++){
    cin>>a>>b;
    l=0;r=n-1;
   while(v[mid]<a||v[mid]>b&&l<=r){
  mid=(l+r)/2;
if(s[i]>v[mid]){
    l=1+mid;
}else {
    r=mid-1;
}


   }
  
    if(v[mid]>=a&&v[mid]<=b){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
   
}




}