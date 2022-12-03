#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){

int n;
cin>>n;
int a[n+1][n+1];
for(int i=1;i<=n;i++){

for(int j=1;j<=n;j++){
   
     a[i][j]=0;


}



}
if(n==2){
    cout<<-1<<endl;
}
else{
int k=1;
for(int i=1;i<=n;i++){

for(int j=1;j<=n;j++){
    if((i+j)%2==0){
     a[i][j]=k;
k++;
}

}
}
for(int i=1;i<=n;i++){

for(int j=1;j<=n;j++){
    if((i+j)%2==1){
     a[i][j]=k;
k++;
}

}
}








for(int i=1;i<=n;i++){

for(int j=1;j<=n;j++){
    
cout<<a[i][j]<<" ";
}
cout<<endl;
}
}


}








}