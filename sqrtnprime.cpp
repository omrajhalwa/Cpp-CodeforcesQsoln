

#include<bits/stdc++.h>
using namespace std;
#define int long long 








signed main(){
    int n;
    cin>>n;
if(n==1){
cout<<0<<endl;
}//sqrtnprime
bool is_prime=true;

for(int i=2;i*i<n;i++){
    if(n%i==0){
        is_prime=false;
    }
}

cout<<is_prime<<endl;













}