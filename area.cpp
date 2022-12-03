#include<iostream>
using namespace std;

int main(){

int n,m,r,k,a[101],c=0;
cin>>n>>m;
for(int i=0;i<n;i++){
cin>>k;
while(k!=0){
   a[c]=k%10;
   k=k/10;
   
   
   c++;
}

}


for(int i=0;i!=n*m;i++){
   cout<<a[i];
}
}