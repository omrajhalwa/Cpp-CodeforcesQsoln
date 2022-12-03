#include<iostream>
using namespace std;

int main(){
int t,j,x,a[101];
cin>>t;
for(int i=0;i<t;i++){
    cin>>j;
   a[j]=i+1;
}for(int j=1;j<=t;j++){
    cout<<a[j]<<" ";
}
 return 0;
}