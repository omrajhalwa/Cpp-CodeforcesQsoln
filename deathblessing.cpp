#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
long long int n;
cin>>n;
long long int a[n];int b[n];
long long int sum=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
}
for(int i=0;i<n;i++){
    cin>>b[i];
}
sort(b,b+n);
for(int i=0;i<n-1;i++){
    sum+=b[i];
}


cout<<sum<<endl;
 }
}