#include<bits/stdc++.h>
using namespace std;

int main(){
long long  a[6][6];
long long high=0;
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        cin>>a[i][j];
    }
}
for(int i=1;i<=5;i++){
    for(int j=i+1;j<=5;j++){
        a[i][j]+=a[j][i];
        a[j][i]=a[i][j];
        
    }
}

long long int arr[]={1,2,3,4,5};
long long int k,f=120;
long long sum=0;

high=a[arr[0]][arr[1]]+2*a[arr[2]][arr[3]]+a[arr[1]][arr[2]]+2*a[arr[3]][arr[4]];
while(f--){

for(int i=3;i>=0;i--){
    if(arr[i]<arr[i+1]){
        k=i;
        break;
    }
}for(int i=4;i>=0;i--){

if(arr[i]>arr[k]){
    swap(arr[i],arr[k]);
    break;
}

}
reverse(arr+k+1,arr+5);




sum=a[arr[0]][arr[1]]+2*a[arr[2]][arr[3]]+a[arr[1]][arr[2]]+2*a[arr[3]][arr[4]];

if(high<sum){
    high=sum;
}
}






cout<<high<<endl;











}