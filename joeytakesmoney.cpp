#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){

int t;
cin>>t;
while(t--){
int n;
cin>>n;
int p=n-1,m=1;
for(int i=0;i<n;i++){
int a;
cin>>a;
m*=a;
}
cout<<(m+p)*2022<<endl;
}
}