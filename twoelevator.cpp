#include<iostream>
using namespace std;


int main(){
int t;
cin>>t;
while(t--){
    int a,b,c;
cin>>a>>b>>c;
int q,w,e;
e=min(b,c);
int r=abs(e-1);
q=abs(a-1);
w=b-c+r;
if(b-c<0){
    w=2*abs(b-c)+r;
}

if(q>w){
    cout<<2<<endl;
}else if(q==w){
    cout<<3<<endl;
}else{
    cout<<1<<endl;
}

}










}