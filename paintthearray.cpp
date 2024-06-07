#include<bits/stdc++.h>
using namespace std;
#define int long long

#define mod 1000000007
signed main(){

int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>odd;
vector<int>even;
for(int i=0;i<n;i++){
    int p;cin>>p;
    if(i%2==0){
        even.push_back(p);
    }else{
        odd.push_back(p);
    }
}
int p=0,k=0;
sort(even.begin(),even.end());
sort(odd.begin(),odd.end());
for(int i=1;i<even.size();i++){
    if((even[i]%mod)%even[0]==0){
        p++;
    }
}for(int i=1;i<odd.size();i++){
    if((odd[i]%mod)%odd[0]==0){
        k++;
    }
}
if(p==even.size()-1){
for(int i=0;i<odd.size();i++){
    if((odd[i]%mod)%even[0]==0){
    p++;
    }
}
}
if(k==odd.size()-1){
    for(int i=0;i<even.size();i++){
    if((even[i]%mod)%odd[0]==0){
    k++;
    }
}
}
if(k==odd.size()-1||p==even.size()-1){

if(k==odd.size()-1){
    cout<<odd[0]<<endl;
}else if(p==even.size()-1){
    cout<<even[0]<<endl;
}

}else{
    cout<<0<<endl;
}
}

}