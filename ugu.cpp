#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
string a;
cin>>a;


int k=0,p=0;
for(int i=0;i<n;i++){
    if(a[i]=='1'&&k%2==0){
        p++;
        k++;
    }else if(a[i]=='0'&&k%2!=0){
        p++;
        k++;
    }
}
if(p>0)
cout<<p-1<<endl;
else{
    cout<<0<<endl;
}




}




}