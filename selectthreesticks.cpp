#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
cin>>t;
for(int i=0;i<t;i++){
    int n;
    cin>>n;
    int a[302];
    for(int j=0;j<n;j++){
        cin>>a[j];
    }
sort(a,a+n);
long long int p=1000000000;
for(int k=0;k<=n-3;k++){
    long long int c=0,b=0,o;
    b=a[k+2]-a[k+1];
   c=a[k+1]-a[k];
o=b+c;
if(o<p){
    p=o;
}
}


cout<<p<<endl;
}



}