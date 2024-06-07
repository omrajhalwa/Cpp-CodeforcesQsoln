#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n;
cin>>n;
vector<int>a(n);
vector<int>b(n);
for(int &x:a){cin>>x;}
for(int &x:b){cin>>x;}

int start=1,end=1e9;

auto istrue=[&](int x){

int flag=0;
for(int i=0;i<n;i++){
    if(a[i]<=x){

    }else if(flag+b[i]<=x){
        flag+=b[i];
    }else{
        return false;
    }
}

return true;

};
int ans=1e9;
while(start<=end){
    int mid=start+(end-start)/2;
    if(istrue(mid)){
        ans=min(ans,mid);
        end=mid-1;
    }else{
        start=mid+1;
    }

}

cout<<ans<<endl;
}
}