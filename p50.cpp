#include<iostream>
using namespace std;

int main(){
int n,m,r[101][101],t,l=0,a=0;
cin>>n>>m;
for(int i=1;i<=n;i++){
cin>>t;
for(int j=1;j<=m;j++){
  r[i][j]=t%10;
  t=t/10;
}}
for(int i=1;i<=m;i++){
int c=0;
for(int j=1;j<=n;j++){
  
  if(r[i][j]>=c){
  c=r[i][j];
  a=j+a*10;
  
  }

}
cout<<a<<endl;

}


cout<<a;}