#include<bits/stdc++.h>
using namespace std;

int main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}sort(v.begin(),v.end());
int ans=0;
for(int i=0;i<n;i++){
    if(i<n-1&&v[i]==v[i+1]){
        if(v[i]>2){
            ans+=2;i++;
        }
        else {ans+=v[i];i++;}
    }else{
        ans++;
    }
}
cout<<ans<<endl;
}
}