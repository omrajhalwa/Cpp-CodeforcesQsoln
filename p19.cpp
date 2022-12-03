#include<iostream>
using namespace std;

int main(){

int n,p,q,a[101],b[101],s[101],c,i=0,num=0,l,m;
cin>>n;
cin>>p;
while(i<p){
    cin>>a[i];
    m=a[i];
    s[m-1]=a[i];
    i++;
}
cin>>q;
int j=0;
while(j<q){
    cin>>b[j];
    l=b[j];
     s[l-1]=b[j];
    j++;
}

for(int i=0;i<n;i++){
  num+=s[i];
    
}

int sum=0;

int k=0;
while(k<=n){

sum+=k;
    k++;
}
if(sum==num){
    cout<<"I become the guy.";
}else{
    cout<<"Oh, my keyboard!";
}


    return 0;
}