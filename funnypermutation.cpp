#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
int n;
cin>>n;
if(n==3){
    cout<<-1<<endl;
}
if(n%2==0){
    for(int j=n;j>0;j--){
        cout<<j<<" ";
    }cout<<endl;
}if(n%2==1&&n!=3){
    for(int j=n;j>0;j--){
         if(j>n/2+1){
             cout<<j<<" ";
             }else if(j<=n/2+1){
                cout<<n-(j+(n/2-1))<<" ";
             }


    }cout<<endl;
}





}





}