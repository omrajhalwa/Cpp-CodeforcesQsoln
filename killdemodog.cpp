#include<bits/stdc++.h>
using namespace std;
//#define int long long
const int N=1e9+7;


int main(){


    int t;
    cin>>t;
    while(t--){
 long long int  n;


cin>>n;
//issue in taking modulus thats by unable to solve in contest????
 long long int k;
k=((((n)*(n+1)%N)*(2*n+1))%N)+2*((((((n-1)*(n))%N)*(n+1))%N));

k%=1000000007;
cout<<(((2022/6)*k)%N)<<endl;


    }

}