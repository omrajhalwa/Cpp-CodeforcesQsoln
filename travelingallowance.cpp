#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){

int n;
cin>>n;
int sum=0;int x1=0,x2=0,y1=0,y2=0;
for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;



if(a>=0){
    x1=max(x1,a);
}else{
    x2=min(x2,a);
}


if(b>=0){
    y1=max(y1,b);
}else{
    y2=min(y2,b);
}











}

x1=x1+abs(x2);
y1=y1+abs(y2);


cout<<2*x1+2*y1<<endl;


}











}