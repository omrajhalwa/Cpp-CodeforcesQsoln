#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
string s;
cin>>s;
int p=0,o=0;
for(int j=0;j<n;j++){
    for(int k=j+1;k<n;k++){
        if(a[j]==a[k]){
            p++;
        if(s[j]==s[k]){
            o++;
        }}
    }
}
if(o==p){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}




}



}