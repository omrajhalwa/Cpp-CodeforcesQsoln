#include<iostream>
using namespace std;

int main(){
int n ,i, fact=1;
cout<<"enter the value of n\n";
cin>>n;
for(i=1;i<=n;i++){

    if(n%i==0)
    cout<<i<<endl;
}



    return 0;
}