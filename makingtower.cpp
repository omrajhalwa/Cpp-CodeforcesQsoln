#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<pair<int,int>>v(n+1);
vector<int>c(n);
for(int i=0;i<n;i++){
    cin>>c[i];
    
    v[c[i]].second=-1;
}

for(int i=0;i<n;i++){

    if(v[c[i]].second==-1||(i-v[c[i]].second+1)%2==0){
        
        v[c[i]].first++;
        v[c[i]].second=i;

    }


}

for(int i=1;i<=n;i++){
    cout<<v[i].first<<" ";
}cout<<endl;
}
}