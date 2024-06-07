#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

int t;cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n);
int h;
cin>>h;
for(int i=0;i<n;i++){
cin>>v[i];
}
sort(v.begin(),v.end());
int a=2,b=1,c=h;int ans1=-1,ans2=-1,ans3=-1;
for(int i=0;i<n;i++){
    while(h<=v[i]&&a){
        h*=2;a--;
    }while(h<=v[i]&&b){
        h*=3;b--;
    }
if(h>v[i]){
    h+=v[i]/2;
    ans1=i;
}

}h=c;a=2,b=1;
for(int i=0;i<n;i++){
    while(h<=v[i]&&b){
        h*=3;b--;
    }while(h<=v[i]&&a){
        h*=2;a--;
    }
if(h>v[i]){
    h+=v[i]/2;
    ans2=i;
}

}
h=c;a=2,b=1;int k=0;
for(int i=0;i<n;i++){
    if(h<=v[i]&&a&&k==0){
        h*=2;a--;k++;
    }
    if(h<=v[i]&&b){
        h*=3;b--;
    }if(h<=v[i]&&a){
        h*=2;a--;
    }
if(h>v[i]){
    h+=v[i]/2;
    ans3=i;
}

}
cout<<max(ans1,max(ans2,ans3))+1<<endl;
}
}