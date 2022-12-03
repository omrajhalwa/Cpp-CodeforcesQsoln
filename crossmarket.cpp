#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
int sum=n+m-2;
if(sum!=0){
sum=sum+min(n-1,m-1)+1;
}
else{
    sum=sum+min(n-1,m-1);
}
cout<<sum<<endl;


}








}