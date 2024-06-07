#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n);
vector<int>c(n);
for(int &x:v){cin>>x;}
for(int &y:c){cin>>y;}

int k=1,j=v.size(),c1=0;
for(int i=0;i<n;i++){
    if(c[i]!=v[i]){
     j=i+1;
        if(c1==0){
            k=i+1;c1++;
        }
    }
}
int ans1=k,ans2=j;

for(int i=k-1;i>=1;i--){
    if(c[i-1]<=c[i]){
        ans1=i;
     
    }else{
        break;
    }
}for(int i=j-1;i<n-1;i++){
    if(c[i]<=c[i+1]){
        ans2=i+2;
    }else{
        break;
    }
}
cout<<ans1<<" "<<ans2<<endl;
}
}