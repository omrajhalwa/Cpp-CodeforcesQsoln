#include<iostream>
using namespace std;

int main(){
int a,b,k;

for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        cin>>k;
        if(k==1){
            a=i;
            b=j;
        }
    }
}
if(a<3&&b<3){
    cout<<3-a+3-b;
}else if(a<3&&b>3){
    cout<<3-a+b-3;
}else if(a>3&&b<3){
    cout<<a-3+3-b;
}else if(a>3&&b>3){
    cout<<a-3+b-3;
}else if(a==3&&b>3){
    cout<<b-3;
}else if(a==3&&b<3){
    cout<<3-b;
}else if(a<3&&b==3){
    cout<<3-a;
}else if(a>3&&b==3){
    cout<<a-3;
}else{
    cout<<"0";
}
 return 0;
}