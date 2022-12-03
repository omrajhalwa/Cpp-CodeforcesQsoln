

 
#include<iostream>
using namespace std;

int main(){
  int n,m,a,b=0;
  cin>>n>>m;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      cin>>a;
      if(a==1){
        if(i==1||j==1||i==n||j==m)
        b++;
      }

    }
  }

if(b==0){
  cout<<4;
}else{
  cout<<2;
}

}