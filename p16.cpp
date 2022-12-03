#include<iostream>
using namespace std;

int main(){

int n,m,a[101],s[101];
cin>>n>>m;
for(int i=0;i<m;i++){

cin>>a[i];

}
for(int i=0;i<m-1;i++){
    for(int j=0;j<m-1-i;j++){
        int x=0;
      if(a[j]>a[j+1]){
        x=a[j];
        a[j]=a[j+1];
        a[j+1]=x;
      }

    }
}

for(int i=0;i<=m-n;i++){


s[i]=a[i+n-1]-a[i];
if(s[i]<s[0]){
    s[0]=s[i];
}

}

cout<<s[0];
    return 0;
}