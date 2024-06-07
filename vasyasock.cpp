#include<bits/stdc++.h>
using namespace std;

int main(){
int n,m;
cin>>n>>m;
int sum=n/m,k;
n=n+n/m;
while(n/m>sum){
    k=sum;
    sum=n/m;
    n+=(n/m)-k;
    
}

cout<<n;

}