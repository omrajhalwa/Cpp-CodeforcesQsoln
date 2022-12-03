#include<bits/stdc++.h>
using namespace std;

int main(){
 long long int n,l;
cin>>n>>l;
vector<long long int>a;
vector<long long int>s;
long long int i=0;
while(i<n){
   a.push_back(i+1);
     i++;
}
long long int k=0;
int m=0;
while(m<n){
   
   if(a[m]%2!=0){
     s[k]=a[m];
      k++;}
      
m++;
}
int j=0;
while(j<n){
   
   if(a[j]%2==0){
     s[k]=a[j];
     k++;}
     j++;
}

    cout<<s[l-1];


}