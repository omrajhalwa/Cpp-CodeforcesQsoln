#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int p,k,l=1;
if(n%2==0){
p=n/2;
k=p;}else{
    k=(n+1)/2;
    p=(n-1)/2;
}

int a[n];
int i=1;
while(p>0){
a[i]=l;
l++;
i=i+2;
p--;
}
i=0;

while(k--){
    a[i]=l;
    l++;
    i=i+2;
}

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}cout<<endl;



}



}