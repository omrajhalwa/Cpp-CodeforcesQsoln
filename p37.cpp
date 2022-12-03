#include<iostream>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np,a,b,q;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    a=((k*l/nl)/n);
    b=c*d/n;
    q=(p/np)/n;
    
   if(a<b&&a<q){
    cout<<a;
   }else if(b<q){
    cout<<b;
   }else{
    cout<<q;
   }
}
