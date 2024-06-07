#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N=1e6+9;
int arr[N+1];
signed main(){
    memset(arr,0,sizeof(arr));
 ios::sync_with_stdio(false);
cin.tie(0);
for(int i=1;i<=N;i++){
    for(int j=i;j<=N;j+=i){
       
       arr[j]++;
    }
}
int t;cin>>t;
while(t--){
int n;
cin>>n;
cout<<arr[n]<<endl;
}
}