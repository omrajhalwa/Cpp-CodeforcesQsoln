#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
 int n;
long long int b[104];
cin>>n;
for(int j=0;j<n;j++){
    cin>>b[j];
    
}
sort(b,b+n);
int p=0;
for(int j=0;j<n-1;j++){
    if(b[j]<b[j+1]){
        p++;
    }
}


if(p==n-1){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}





}





}