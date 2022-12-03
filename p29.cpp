#include<iostream>
using namespace std;

int main(){
    int n,a[101],odd=0,even=0;
cin>>n;
for(int i=1;i<=n;i++){
    cin>>a[i];
}
for(int i=1;i<=n;i++){
    if(a[i]%2!=0){
       odd++;
    }else{
        even++;
    }
}
if(odd>even){
    for(int i=1;i<=n;i++){
    if(a[i]%2==0){
       cout<<i;
    }
}
}else{
    for(int i=1;i<=n;i++){
    if(a[i]%2!=0){
       cout<<i;
    }
}
}
}