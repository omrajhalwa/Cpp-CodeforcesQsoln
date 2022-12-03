#include<iostream>
using namespace std;

int main(){
int t,a[101],b[101],count=0;
cin>>t;
int i=0;
while(i<t){
     cin>>a[i]>>b[i];
i++;}
for(int i=0;i<t;i++){
    int j=0;
    while(j<t){
    if(a[i]==b[j]){
    count++;}
j++;}}
cout<<count;


    return 0;
}