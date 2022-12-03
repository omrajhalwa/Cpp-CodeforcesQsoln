#include<iostream>
using namespace std;

int main(){

int n,x,c=0,k;

cin>>n>>x;

for(int i=0;i<n;i++){
    int a,g=1;
    cin>>a;

while(g<=a){
    k=g;
    g=g+x;
}
int b,r;
cin>>b;
r=b+1-k;
c=c+r;


}
cout<<c;
}