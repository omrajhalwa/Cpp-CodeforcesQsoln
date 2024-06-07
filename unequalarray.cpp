#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){

int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n);
int a=-1,b=-1;
for(int i=0;i<n;i++){
cin>>v[i];

}
int k=0,p=0;
for(int i=0;i<n-1;i++){
    if(v[i]==v[i+1]&&k==0){
     a=i+1;k++;p++;
    }else if(v[i]==v[i+1]){
        b=i;p++;
    }
}

 if(a==b&&a>-1&&p>1){
    cout<<1<<endl;
}else if(p>1){
cout<<abs(b-a)<<endl;}
else cout<<0<<endl;

}
}