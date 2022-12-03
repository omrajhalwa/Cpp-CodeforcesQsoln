#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
long long int n;
cin>>n;
vector<long long int>v(n+2);

for(int i=0;i<n;i++){
    cin>>v[i];
}
long long int k=0,ze=0,sum=0;
for(int i=0;i<n-1;i++){
 if(v[i]>0){
    k++;
 }if(k>0&&v[i]==0){
    ze++;
 }if(v[i]>0){
    sum+=v[i];
 }
}
cout<<sum+ze<<endl;





}
}