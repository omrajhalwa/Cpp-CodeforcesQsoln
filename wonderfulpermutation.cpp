#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
vector<int>v(n+1);
for(int i=1;i<=n;i++){
cin>>v[i];
}
int p=0;
for(int i=1;i<=k;i++){

for(int j=1;j<=k;j++){

    if(v[j]==i){
        p++;
    }
}

}

cout<<k-p<<endl;


}

}