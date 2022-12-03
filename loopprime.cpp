#include<iostream>
using namespace std;

int main(){
int i,n,count=0;

cout<<"enter the value of no\n";
cin>>n;
for(i=1;i<=n;i++){
    if(n%i==0)
    count++;
}
if(count==2){
    cout<<"perfect no";
}
else
cout<<" not perfect no";











    return 0;
}