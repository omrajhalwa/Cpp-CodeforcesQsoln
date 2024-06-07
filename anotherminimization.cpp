#include<bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin>>t;
    while(t--){
int n,m;
cin>>n>>m;
int a[60];

char str[m];
a[n]=0;
    for(int i=0;i<m;i++){
        str[i]='B';
    }
for(int i=0;i<n;i++){
cin>>a[i];

}
sort(a,a+n);
for(int i=0;i<n;i++){
    int ans,mn,mx;
    mx=max(a[i],m+1-a[i]);
    
       mn=min(a[i],m+1-a[i]); 
    if(str[mn-1]=='A'){
        ans=mx;
    }else{
        ans=mn;
    }
str[ans-1]='A';

}for(int i=0;i<m;i++){
cout<<str[i];

}
cout<<endl;


    }





}