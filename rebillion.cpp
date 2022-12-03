#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
    int n,o=0,z=0;
    cin>>n;
    int a[n];
    for(int j=0;j<n;j++){
        cin>>a[j];
        if(a[j]==1){
            o++;
        }else{
            z++;
        }
    }
    int p=0;
    int j=n-1;
    while(o--){
        if(a[j]==0){
            p++;
        }
    j--;}
    
    cout<<p<<endl;
    
    
    
}



}