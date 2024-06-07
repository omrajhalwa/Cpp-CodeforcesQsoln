#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){

int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    int minus=0,plus=0;
    for(int &x:v){
        cin>>x;
        if(x==-1)minus++;
        if(x==1)plus++;
    }
    vector<pair<int,int>>seg;
    int dif=(minus+plus)/2-min(plus,minus);
    for(int i=n-1;i>=0;i--){
        if(minus>plus){
            if(v[i]==-1&&dif!=0){
                dif--;
                seg.push_back({i,i+1});
                i--;
            }else{
                seg.push_back({i+1,i+1});
            }
        }else{
            if(v[i]==1&&dif!=0){
                dif--;
                seg.push_back({i,i+1});
                i--;
            }else{
                seg.push_back({i+1,i+1});
            }
        }
    }

   if((minus+plus)%2==0){
    cout<<seg.size()<<endl;
    sort(seg.begin(),seg.end());
     for(auto it:seg){cout<<it.first<<" "<<it.second<<endl;}
   }
else{
    cout<<-1<<endl;
}
}
}