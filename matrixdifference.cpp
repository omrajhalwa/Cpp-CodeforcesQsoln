#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n+1][n+1];
int k=n*n,b=1,c=0;
for(int i=0;i<n;i++){
    if(i%2==0){
  for(int j=0;j<n;j++){
  if(c%2==0){
    a[i][j]=k;k--;c++;
  }else{
    a[i][j]=b;b++;c++;
  }

  }
  }else{
    for(int j=n-1;j>=0;j--){
    if(c%2==0){
    a[i][j]=k;k--;c++;
  }else{
    a[i][j]=b;b++;c++;
  }

  }
  }

}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }cout<<endl;
}


}
}