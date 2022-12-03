#include<iostream>
using namespace std;

int main(){

int n,k,p,a=251,b=251,c=251,d=251;
cin>>n>>k;
p=n;

  for(int j=0;j<n;j++){
    
    if(p*2==k){
        a=p;
        
        
    }else if(p*2+j*3==k){
        b=p;
        
        
    }else if(p*2+j*4==k){
        c=p;
        
        
    }else if(p*2+j*5==k){
        d=p;
        
        
    }
    
 p--; }


if(a<b&&a<c&&a<d){
    cout<<a;
}else if(b<c&&b<d){
    cout<<b;
}else if(c<d){
    cout<<c;
}else if(d>c){
    cout<<d;
} else{
        cout<<0;
    }






}




