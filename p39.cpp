#include<iostream>
using namespace std;

int main(){
int n,a[100],u=1001;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}int i=1;
while(i<n-1){
    int j=0,c=0;
   while(j<n-1){int x;
    if(j+1==i&&j!=i){
        x=a[j+2]-a[j];
    }else if(j!=i){
        x=a[j+1]-a[j];
    }

 if(x>c){
    c=x;
 }

j++;
   }

if(c<u)
{
    u=c;
}
    i++;
}
cout<<u;
}