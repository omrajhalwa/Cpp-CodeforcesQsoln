#include<bits/stdc++.h>
using namespace std;

int main(){

long long int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n],b[n+1];
for(int i=0;i<n;i++){
cin>>a[i];

}b[0]=a[0];
b[n]=a[n-1];
for(int i=1;i<n;i++){
    b[i]=a[i]*a[i-1]/__gcd(a[i],a[i-1]);
}
int p=0;
for(int i=0;i<n;i++){
    if(a[i]==__gcd(b[i],b[i+1])){
        p++;
    }
}
if(p==n||n==1){
cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}

}
return 0;
}