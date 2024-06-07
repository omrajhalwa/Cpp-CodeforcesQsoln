#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;

vector<int>v(n+1);
v[n]=0;
for(int i=0;i<n;i++){
    cin>>v[i];
}
int p=0,k=1,l=0;
vector<int>c;
for(int i=0;i<n;i++){
    
    if(v[i]==v[i+1]){
        p++;
        c.push_back(i+1);
    }else{
        if(p<1){
            k=-1;
            break;
        }
        p=0;
        c.insert(c.begin()+l,i+1);
        l=i+1;
    }
}

if(k==-1){
    cout<<k<<endl;
}else{
for(int i=0;i<c.size();i++){
    cout<<c[i]<<" ";
}cout<<endl;
}
}

}