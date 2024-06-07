#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){

int n,m;
cin>>n>>m;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
} 
int a[n+3],b[n+3];
a[0]=0,b[n]=0;
int sum=0,rum=0;
for(int i=1;i<n;i++){
    if(arr[i-1]-arr[i]>=0){
        sum+=abs(arr[i-1]-arr[i]);}
        a[i]=sum;
    
}for(int i=n-1;i>0;i--){
if(arr[i]-arr[i-1]>=0){
    rum+=abs(arr[i-1]-arr[i]);
}b[i]=rum;
}
b[0]=rum;

for(int i=0;i<m;i++){
    int c,d;
    cin>>c>>d;

if(c<d){
cout<<a[d-1]-a[c-1]<<endl;}
else{
    cout<<b[d]-b[c]<<endl;
}
}
}