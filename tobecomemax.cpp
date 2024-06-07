#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;
cin>>t;
while(t--){


    int n,k;
    cin>>n>>k;
    vector<int>v(n);

    for(int &x:v){cin>>x;}
    vector<int>c=v;
    

auto givethevalue=[&](int x,int cur){
int val=0,j;
for( j=cur;j<n;j++){
    if(c[j]>=x){ break;}
    val+=x-c[j];
    x--;
}
if(j==n) return -1*1LL;
return val;
};
    for(int i=0;i<n;i++){
        int start=c[i]+1,end=2e18;

        while(start<=end){
            int mid=start+(end-start)/2;
            int check=givethevalue(mid,i);
            if(k>=check&&check!=-1){
            //   cout<<i<<" "<<mid<<" "<<check<<endl;
                v[i]=mid;
              start=mid+1;
            }else{
                end=mid-1;
            }

        }
    }



int ans=0;
for(int i=0;i<n;i++){
    ans=max(ans,v[i]);
   // cout<<v[i]<<" ";
}
cout<<ans<<endl;
}
}