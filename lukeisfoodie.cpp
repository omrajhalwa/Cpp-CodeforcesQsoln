#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){

int t;
cin>>t;
while(t--){
int n,x,p=0;
cin>>n>>x;
int arr[n];
vector<pair<int,int>>v;
for(int i=0;i<n;i++){
    cin>>arr[i];
    v.push_back(make_pair(arr[i]-x,arr[i]+x));

}

int a=v[0].first,b=v[0].second;
for(int i=1;i<n;i++){
    int c=v[i].first,d=v[i].second;
if(d<b&&c>a){
    b=d;
    a=c;
}else if(c<=a&&b<=d){
    
    
}else if(c<=b&&c>a&&d>b){

a=c;
}else if(a>c&&a<=d&&d<b)
{
    b=d;
    
}else{
    p++;
    a=c;
    b=d;
}


}


cout<<p<<endl;

}
}