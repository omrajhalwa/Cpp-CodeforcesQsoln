#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
   long long      int n=0,k=0;
 cin>>n>>k;
 long long int a[n];
for(int i=1;i<=n;i++)
{cin>>a[i];}
vector<long long int>v(k);
for(int i=1;i<=n;i++){
    v[i%k]=max(v[i%k],a[i]);
}
long long int sum=0;
for(int i=0;i<k;i++){
    sum+=v[i];
}
cout<<sum<<endl;
    }
 
}