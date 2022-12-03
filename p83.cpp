#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[3002],n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
sort(a+1,a+n+1);
int k=0;
for(int i=1;i<=n;i++){
    if(i!=a[i]){
        cout<<i;
        k++;
        break;
    }
    
}
if(k==0){
        cout<<a[n]+1;
        }
    
}