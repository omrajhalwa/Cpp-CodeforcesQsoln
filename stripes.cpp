#include<bits/stdc++.h>
using namespace std;

int main(){
long long int n;
cin>>n;
for(int l=0;l<n;l++){
char a[9][9];int m=0,n=0,r=0,k=0;
for(int i=0;i<8;i++){

    for(int j=0;j<8;j++){
        cin>>a[i][j];
if(a[i][j]=='R'){
    n=0;
m++;if(m==8){
    r++;
    k=0;
}


}else{
m=0;
n++;
if(n==8){
    k++;
    r=0;
}


}
        
    }}


if(r>0){
    cout<<'R'<<endl;
}else{
    cout<<'B'<<endl;
}


}









}






