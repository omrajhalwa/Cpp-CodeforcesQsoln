#include<bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while(t--){

int n;
cin>>n;
vector<int>v(n+10);
for(int i=1;i<=n;i++){
    v[i]=i;
}

if(n%2==0){
    for(int i=1;i<n;i=i+2){
        swap(v[i],v[i+1]);
    }
}else{
    for(int i=2;i<n;i=i+2){
        swap(v[i],v[i+1]);
    }
}


for(int i=1;i<=n;i++){
    cout<<v[i]<<" ";
}
cout<<endl;

}









}