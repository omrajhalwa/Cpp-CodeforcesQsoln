#include<iostream>
using namespace std;

int main()
{
long long int a,b,c,r,r1,rev=0,ev=0,v,k,prv=0,rv=0,pgv=0,gv=0,m,n,p;
cin>>a>>b;
c=a+b;
while(a>0){
    v=a%10;
    a=a/10;
if(v!=0){
    prv=prv*10+v;
}
}while(prv>0){
k=prv%10;
prv=prv/10;

    rv=rv*10+k;

}



while(b>0){
    n=b%10;
    b=b/10;
if(n!=0){
    pgv=pgv*10+n;
}
}while(pgv>0){
m=pgv%10;
pgv=pgv/10;

    gv=gv*10+m;

}















while(c>0){
r=c%10;
c=c/10;
if(r!=0){
rev=rev*10+r;}
}
while(rev>0){
    r1=rev%10;
    rev=rev/10;
    ev=ev*10+r1;
}


p=rv+gv;
if(p==ev){
    cout<<"YES";
}else{
    cout<<"NO";
}


}