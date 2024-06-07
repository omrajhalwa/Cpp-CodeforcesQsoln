#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){

int n,k;
cin>>n>>k;
vector<int>v(k);
for(int &x:v){cin>>x;}
int ans=0;

for(int ind=0;ind<(1<<k);ind++){
            int val=1,bitcnt=0;
    for(int bit=0;bit<k;bit++){
            int a=ind;
            if(((a>>bit)&1)==1){
                bitcnt++;
                val=val*1LL*v[bit];
            }
            
            
    }

          if(bitcnt>0){
            val=n/val;
            if(bitcnt%2==0){
                ans-=val;
            }else{
                ans+=val;
            }
          }
}

cout<<ans;

}