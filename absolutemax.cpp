#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int k=0;
vector<int>v(n);

for(int i=0;i<n;i++){

    cin>>v[i];
    k=(k|v[i]);

    
}


int mx=v[0];
for(int i=1;i<n;i++){

  mx=(mx&v[i]);
}



cout<<k-mx<<endl;


}


}