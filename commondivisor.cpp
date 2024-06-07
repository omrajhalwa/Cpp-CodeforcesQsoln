#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){



vector<int>hash(1e6+7,0);
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
    hash[v[i]]++;
}
int mx=0;
for(int i=1;i<=1e6+7;i++){
    int cnt=0;
    for(int j=i;j<=1e6;j+=i){
        if(hash[j]>=1)cnt+=hash[j];
        if(cnt>=2){
            mx=max(mx,i);
        }
    }
}

cout<<mx;

}