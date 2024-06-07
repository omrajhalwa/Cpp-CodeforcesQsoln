#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--)
{int n;cin>>n;
vector<int>v(n);int min=0,plus=0;
map<int,int>mp;
for(int &x:v){cin>>x;mp[x]=11;
if(x>0){plus++;}
else if(x<0){min++;}
}

if(min>2||plus>2){
    cout<<"NO"<<endl;
}else{
    vector<int>c;int k=0;
    for(int i=0;i<n;i++){
        if(v[i]==0&&k==0){
            c.push_back(0);k++;
        }else if(v[i]!=0){
          c.push_back(v[i]);
        }
    }
    bool give=true;
    if(c.size()>2){
    for(int i=0;i<c.size()-2;i++){
        for(int j=i+1;j<c.size()-1;j++){
          for(int k=j+1;k<c.size();k++){
        
        if(mp[c[i]+c[j]+c[k]]!=11){
            //cout<<i<<j<<k<<endl;
           give=false;
        }
        }
        }
    }
    }
    if(give){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
}





}