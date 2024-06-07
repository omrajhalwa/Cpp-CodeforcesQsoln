#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
long  long int n;
cin>>n;
vector<long long int>v(n);
map<long long int,long long int>mp;
for(int i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]++;
}
sort(v.begin(),v.end());

if(v[0]!=v[n-1])
cout<<mp[v[0]]*2*mp[v[n-1]]<<endl;
else{
    cout<<n*(n-1)<<endl;
}

}
}