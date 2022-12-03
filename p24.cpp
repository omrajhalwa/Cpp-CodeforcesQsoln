#include<iostream>
using namespace std;

int main(){
 long long int s,n;
cin>>s>>n;
long long int x[n],y[n];
for(int i=0;i<n;i++){
    cin>>x[i]>>y[i];
   
}
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        int a=0,b=0;
      if(x[j]>x[j+1]){
        a=x[j];
        x[j]=x[j+1];
        x[j+1]=a;
         b=y[j];
        y[j]=y[j+1];
        y[j+1]=b;
      }

    }
}
long long k=0, i=0;
while(k<n&&i<n){
    
if(s>x[i]){
s+=y[i];

}else{
     cout<<"NO";
     break;
}
i++;
    k++;
}

if(s>x[n-1]){
    cout<<"YES";
}



}