#include<iostream>
using namespace std;

int main(){
int n,s[1001],c,b=1001,a,d,k;
cin>>n;
for(int i=1;i<=n;i++){
cin>>s[i];
}








for(int i=1;i<=n;i++){
    
        if(s[i]-s[i+1]>0){
          c=s[i]-s[i+1];
        }if(s[i+1]-s[i]>=0){
            c=s[i+1]-s[i];
        }


        if(b>c){
            b=c;
        a=i;
        d=i+1;
        
    }
    
}
if(s[1]-s[n]>0){
    k=s[1]-s[n];
}else if(s[n]-s[1]>=0){
    k=s[n]-s[1];
}

if(b<k){
cout<<a<<" "<<d;
}else{
    cout<<"1"<<" "<<n;
}


}