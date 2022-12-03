#include<bits/stdc++.h>
using namespace std;


int main(){
int n,a=0,b=0;
pair<int,int>arr[100001];
cin>>n;
int s=0;
while(s<n){
    cin>>arr[s].first>>arr[s].second;
    if(arr[s].first<arr[s].second){
        a++;
    }else if(arr[s].first>arr[s].second){
        b++;
    }
    s++;
}

if(a>0&&b>0){
    cout<< "Happy Alex";
}else{
    cout<<"Poor Alex";
}



}