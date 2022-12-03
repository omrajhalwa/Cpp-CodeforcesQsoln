#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n],b[n],mux=0;
for(int i=0;i<n;i++){
cin>>a[i];
}
mux=a[n-1]-a[0];

for(int i=0;i<n-1;i++){

    mux=max(mux,a[i+1]-a[0]);
}for(int i=0;i<n-1;i++){

    mux=max(mux,a[n-1]-a[i]);
}
for(int i=0;i<n;i++){

    mux=max(mux,a[(n-1+i)%n]-a[i]);
}


cout<<mux<<endl;

}






}