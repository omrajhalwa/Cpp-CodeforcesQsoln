#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
int a[53][53];
int t=0;
for(int i=0;i<=50;i=i+2){
    if(t%2==0){t++;
      int p=0;
    for(int j=0;j<=50;j=j+2){
      if(p%2==0){
        a[i][j]=1;
        a[i+1][j]=1;a[i+1][j+1]=1;
        a[i][j+1]=1;p++;
      }else{
        a[i][j]=0;a[i][j+1]=0;p++;a[i+1][j]=0;a[i+1][j+1]=0;
      }

    }}else{int l=0;t++;
        for(int j=0;j<=50;j=j+2){
      if(l%2==0){
        a[i][j]=0;a[i+1][j]=0;a[i+1][j+1]=0;
        a[i][j+1]=0;l++;
      }else{
        a[i][j]=1; a[i+1][j]=1;a[i][j+1]=1;a[i+1][j+1]=1;l++;
      }

    }
    }
}


for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cout<<a[i][j]<<" ";
    }cout<<endl;
}


}

}