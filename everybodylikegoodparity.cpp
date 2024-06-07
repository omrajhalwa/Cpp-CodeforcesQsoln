#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){


int t;
cin>>t;
while(t--){
int n;
cin>>n;
int p;
cin>>p;
int sum=0;
for(int i=0;i<n-1;i++){
    int a;
    cin>>a;
    if(p%2==0&&a%2==0){
        sum++;
        
    }else if(p%2!=0&&a%2!=0){
        sum++;
    }
    p=a;
}

cout<<sum<<endl;

}
}