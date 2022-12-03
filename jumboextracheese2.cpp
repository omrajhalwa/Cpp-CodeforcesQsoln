#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n;long long int c=0,d=0;
cin>>n;
while(n--){
long long int a,b;
cin>>a>>b;

c=c+2*(min(a,b));
if(max(a,b)>d){
    d=max(a,b);
}



}
cout<<c+2*d<<endl;




}



}