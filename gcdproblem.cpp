#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
int t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll b;
b=(n-1)/2;

if(n%2==0){
cout<<2<<" "<<n-3<<" "<<1<<endl;

}else{

if(b%2==0){
    cout<<b+1<<" "<<b-1<<" "<<1<<endl;
}else{
    cout<<b+2<<" "<<b-2<<" "<<1<<endl;
}



}






}










}