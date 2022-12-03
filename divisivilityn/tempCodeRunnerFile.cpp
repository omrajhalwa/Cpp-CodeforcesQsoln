#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n,p=1,sum=2;
cin>>n;
long long a[n];
vector<int>v;
for(int i=1;i<=n;i++){
cin>>a[i];
p=p*a[i];if(i==sum){
v.push_back(i);
sum=sum*2;}
}
long long l,k=0,q=0;
l=pow(2,n);
if(p%l==0){
    cout<<0<<endl;
}else{
for(int i=1;i<n;i++){
    p=p*v[v.size()-i];
if(p%l==0){
  cout<<"="<<i<<endl; 
  q++; 
  break;
}

}


}

if(q==0){
    cout<<-1<<endl;
}
}







}