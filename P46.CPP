#include<iostream>
using namespace std;

int main(){
int n;
int b,a[101],pos=0;
cin>>n>>b;
for(int i=0;i<n;i++){
    cin>>a[i];
}int i=0;
while(i<n){
int r=0,p=0,count=0;
while(a[i]>0){
     r=a[i]%10;
     a[i]=a[i]/10;
if(r==4||r==7){
    count++;
}


}
if(count<=b){
    pos++;
}
i++;
}

cout<<pos;

    return 0;
}