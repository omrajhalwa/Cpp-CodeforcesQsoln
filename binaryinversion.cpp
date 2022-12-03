#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n);
vector<int>z(n);
vector<int>o(n);
for(int i=0;i<n;i++){
    cin>>v[i];
    z[i]=v[i];
    o[i]=v[i];
}
for(int i=0;i<n;i++){
    if(o[i]==0){
        o[i]=1;
        break;
    }
}for(int i=n-1;i>=0;i--){
    if(z[i]==1){
        z[i]=0;
        break;
    }
}

vector<int>zero;
vector<int>ero;
vector<int>ro;
for(int i=0;i<n;i++){
    if(o[i]==0){
        zero.push_back(i);
    }if(z[i]==0){
        ero.push_back(i);
    }if(v[i]==0){
        ro.push_back(i);
    }
}
long long int sum=0,rum=0,cam=0;
for(int i=0;i<n;i++){

if(o[i]==1){
   auto upper = upper_bound(zero.begin(), zero.end(), i);

int u=upper- zero.begin() ;
sum+=zero.size()-u;
}
}for(int i=0;i<n;i++){

if(z[i]==1){
   auto upper = upper_bound(ero.begin(), ero.end(), i);

int u=upper- ero.begin() ;
rum+=ero.size()-u;
}
}for(int i=0;i<n;i++){

if(v[i]==1){
   auto upper = upper_bound(ro.begin(), ro.end(), i);

int u=upper- ro.begin() ;
cam+=ro.size()-u;
}
}



cout<<max(max(sum,cam),rum)<<endl;



}
}