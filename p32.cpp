#include<iostream>
using namespace std;

int main(){
  long long int n,v,c=0,p=0,b[1001];
    cin>>n>>v;
    for(long long int i=0;i<n;i++){
     long long int count=0,k;
    cin>>k;
    for(long long int j=0;j<k;j++){
      long long int a[501];
        cin>>a[j];
        if(a[j]<v){
            count++;
        }
    }
    if(count!=0){
        c++;
        b[p]=i+1;
        p++;
    }




}

for(int i=0;i<c-1;i++){
  for(int j=0;j<c-1-i;j++){
    int x=0;
    if(b[j]>b[j+1]){
      x=b[j];
      b[j]=b[j+1];
      b[j+1]=x;
    }
  }
}

cout<<c<<endl;
if(c!=0){
for(int i=0;i<c;i++){
    cout<<b[i]<<" ";
}
}
}