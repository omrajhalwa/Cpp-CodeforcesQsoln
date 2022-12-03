#include<bits/stdc++.h>
using namespace std;

 




int main(){
long long int b;
cin>>b;

long long int sum=2;
for(int i=3;i<b;i++){
    sum=sum+pow(i-1,2);
}
cout<<b*b-sum;








}