#include<bits/stdc++.h>
using namespace std;

long long int dectobin(long long int g,long long int n){
long long int r;
long long int bin=0;
while(n--){
    r=g%2;
    g=g/2;
    if(r==1){
    bin++;}
    
}

return bin;

}




int main(){
long long int n,m,k,l,a[101];
cin>>n>>m>>k;
for(int i=0;i<m+1;i++){
    cin>>a[i];
    
}
for(int i=0;i<m;i++){
    a[i]=abs(a[m]-a[i]);
    
}
long long int p=0;
for(int i=m-1;i>-1;i--){
if(dectobin(a[i],n)<=k){
p++;
}

}
cout<<p;


}