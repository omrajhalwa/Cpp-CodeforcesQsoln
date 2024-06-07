#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;while(t--){
int n,m;
cin>>n>>m;
if(n%2==0&&m%2==0&&m>=n){
cout<<"YES"<<endl;
for(int i=0;i<n;i++){
    if(i<n-2){cout<<1<<" ";}
    else{cout<<(m-((n-2)))/2<<" ";}
}



}else if(n%2!=0&&m>=n){
cout<<"YES"<<endl;
for(int i=0;i<n;i++){
    if(i<n-1){cout<<1<<" ";}
    else{cout<<m-(n-1)<<" ";}
}


}else{
    cout<<"NO";
}
cout<<endl;


}


}