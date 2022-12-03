#include<bits/stdc++.h>
using namespace std;


signed main(){
int t;
cin>>t;
while(t--){
double n,k;
cin>>n;
vector<double>v(n);
vector<double>c(n);
double sum=0;
for(int i=0;i<n;i++){
    cin>>v[i];
    sum=sum+v[i];
}
for(int i=0;i<n;i++){
    cin>>c[i];
}

double h=sum/n;
if(n==1){
    cout<<0<<endl;
}else
cout<<h<<endl;

}
 
 
 
 
 
 
 
}