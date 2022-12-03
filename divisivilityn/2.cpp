#include<bits/stdc++.h>
using namespace std;

int main(){
long long int t;
cin>>t;
while(t--){
long long int n,p=1,sum=2;
cin>>n;
long long y;
vector<long long int>v;
vector<long long int>a;
for(int i=1;i<=n;i++){
cin>>y;
a.push_back(y);
p=p*y;
if(i==sum){
v.push_back(i);
sum=sum*2;}
}
long long l,k=0,q=0;
l=pow(2,n);
if(p%l==0){
    cout<<0<<endl;q++;
}else{
for(int i=v.size()-1;i>=0;i--){
    p=p*v[i];
if(p%l==0){
  cout<<v.size()-i<<endl; 
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