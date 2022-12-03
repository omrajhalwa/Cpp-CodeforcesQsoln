#include<iostream>
using namespace std;

int main(){
long long int n,m;
cin>>n>>m;
long long int a[m+1];
for(int i=0;i<m;i++){
    cin>>a[i];
}
long long int k=1,p=0;
for(int i=0;i<m;i++){
    
    if(a[i]-k>=0){
        p=p+a[i]-k;
        k=a[i];
    }else{
        p=p+(n+(a[i]-k));
        k=a[i];
    }
}

cout<<p<<endl;
}