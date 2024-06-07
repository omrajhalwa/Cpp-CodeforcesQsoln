#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n);vector<int>c(n);
for(int i=0;i<n;i++){
    cin>>v[i];
    c[i]=v[i];
}
sort(c.begin(),c.end());
vector<int>a;
for(int i=0;i<n;i++){
    if(v[i]!=c[i]){
        a.push_back(c[i]);
    }
}
int b=a[0];
for(int i=1;i<a.size();i++){
    b=(b&a[i]);
}
cout<<b<<endl;


}
}