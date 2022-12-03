#include<bits/stdc++.h>
using namespace std;
int main(){
  long long  int s,n,l=101,k;
cin>>n;
vector<int>a;
for(int i=0;i<n;i++){
    cin>>s;
    a.emplace_back(s);
}
for(int j=0;j<=n-2;j++){
int i=0;
while(a[i+j]!=a[i+1+j]){
    if(a[i+j]>a[i+1+j]&&a[i+j]!=a[i+1+j]){
        a[i+j]=a[i+j]-a[i+1+j];
    }else if(a[i+1+j]>a[i+j]&&a[i+j]!=a[i+1+j]){
        a[i+1+j]=a[i+1+j]-a[i+j];
    }

  
    
  
}}
sort(a.begin(),a.end());


cout<<a[0]*n;

}