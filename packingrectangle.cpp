#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){


int a,b,n;
cin>>a>>b>>n;
int p=a,k=b;

while(n>1){

if(p<k){
    p+=a;
}else{
    k+=b;
}


    n=n-2;
}


cout<<max(p,k)<<endl;

}