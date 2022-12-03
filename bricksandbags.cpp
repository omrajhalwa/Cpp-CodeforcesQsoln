#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
long long int a[10000];
int main(){
int t;
cin>>t;
while(t--){
    long long int n;
cin>>n;
//long long int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);


long long int ans=0;
for(int i=0;i+1<n-1;i++){
    ans=max(ans,a[i+1]-a[i]+a[n-1]-a[i]);
}
for(int i=1;i<n-1;i++){
    ans=max(a[i+1]-a[i]+a[i+1]-a[0],ans);
}
cout<<ans<<endl;
}


}