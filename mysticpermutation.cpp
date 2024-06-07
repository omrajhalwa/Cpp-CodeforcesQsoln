#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){

int n;
cin>>n;
vector<int>v(n);
vector<int>c(n);vector<int>b(n);
for(int i=0;i<n;i++){

cin>>v[i];
c[i]=b[i]=v[i];

}

bool give=true;

for(int i=0;i<n-1;i++){
    pair<int,int>p;
    p.first=n+1;
    p.second=i;
    for(int j=i+1;j<n;j++){
      if( p.first>v[j]){
        p.first=v[j];
        p.second=j;
        
      }
    }
swap(v[i],v[p.second]);

}
for(int i=0;i<n;i++){

if(v[i]==c[i]){
    give=false;
    break;
}
}

if(give){


for(int i=0;i<n;i++){

cout<<v[i]<<" ";
}
cout<<endl;}else{
    cout<<-1<<endl;
}
}
}