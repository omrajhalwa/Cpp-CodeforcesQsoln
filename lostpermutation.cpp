#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
    int n,m;

cin>>n>>m;
int a;
int sum=0,rum=0;
vector<int>v(n);
for(int i=1;i<=n;i++){
    cin>>a;
    v.push_back(a);
    rum+=a;
    
}

int g=*max_element(v.begin(),v.end());
for(int i=1;i<=g;i++){
    sum+=i;
    }
    int k=sum-rum;
int i=1;
while(k<m){

k=k+g+i;

i++;

}



if(k==m){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}







}











}