#include<iostream>
using namespace std;

int main(){
int t,a[101],b[101],c[101],count=0,x=0,y=0,z=0;
cin>>t;
int i=0;
while(i<t){
     cin>>a[i]>>b[i]>>c[i];
i++;}
for(int i=0;i<t;i++){
    x+=a[i];
    y+=b[i];
    z+=c[i];
}
if(x==0&&y==0&&z==0){
    cout<<"YES";
}else{
    cout<<"NO";
}


    return 0;
}