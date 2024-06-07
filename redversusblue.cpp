#include<bits/stdc++.h>
using namespace std;

int main(){
int t;cin>>t;
while(t--){
int n,a,b;
cin>>n>>a>>b;
vector<char>v(500);
for(int i=0;i<n;i++){
v[i]=('R');
}
int div=0,dif=a/(b+1),rem=a%(b+1),k=b+1-rem;
div=dif+1;
int i=-1;
for(;rem--;){
    i=i+div+1;
    v[i]='B';
}for(;k--;){
    i=i+dif+1;
    v[i]='B';
}


for(int i=0;i<n;i++){
    cout<<v[i];
}
cout<<endl;}

}