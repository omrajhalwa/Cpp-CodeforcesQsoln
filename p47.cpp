#include<bits/stdc++.h>
using namespace std;

int main(){
int a,b,c,d,m,v,v1,v2,m1,m2;
cin>>a>>b>>c>>d;
m1=a-(a/250)*c;
m2=3*a/10;
if(m1>m2){
    m=m1;
}else{
    m=m2;
}
v1=b-(b/250)*d;
v2=3*b/10;
if(v1>v2){
    v=v1;
}else{
    v=v2;
}



if(m>v){
    cout<<"Misha";
}else if(m==v){
    cout<<"Tie";
}else{
    cout<<"Vasya";
}


}