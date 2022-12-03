#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
for(int i=0;i<n;i++){
int a[1001],t,c;
cin>>t>>c;
for(int i=0;i<t;i++){
cin>>a[i];

}
sort(a,a+t);
int b=0,p=0,k=1;
for(int i=0;i<t;i++){
a[t]=0;
    if(a[i]==a[i+1]){
       k++;
    }else{
        b++;
        if(k>=c){
            p=p+c;
        }else{
            p=p+k;
        }
        k=1;
    }
        
        
    }
if(c==1){
cout<<b<<endl;}
else{
    cout<<p<<endl;
}

}



}











