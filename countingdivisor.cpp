#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e6+10;
int divisorscnt[N+1]={0};



signed main(){
    ios::sync_with_stdio(false);
cin.tie(0);

for(int i=1;i<N;i++){
 for(int j=i;j<N;j+=i){
    divisorscnt[j]+=1;
 }
}





int t;
cin>>t;
while(t--){
 
int n;
cin>>n;


cout<<divisorscnt[n]<<endl;

}




}