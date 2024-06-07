#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n,m;cin>>n>>m;
 char a[n+1][m+1];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}

auto fall=[&](vector<char>v){

for(int i=v.size()-1;i>=0;i--){
    if(v[i]=='*'){
    for(int j=i;j<v.size();j++){
     if(j<v.size()-1&&v[j+1]=='o'){
        swap(v[i],v[j]);
        j=v.size();
     }else if(j<v.size()-1&&v[j+1]=='*'){
        swap(v[i],v[j]);
        j=v.size();
     }else if(j==v.size()-1){
        swap(v[i],v[j]);
     }
    }
    }
}
return v;
};
vector<vector<char>>b;
for(int j=0;j<m;j++){
    vector<char>c;
    for(int i=0;i<n;i++){
        c.push_back(a[i][j]);
    }
    b.push_back(fall(c));
}


    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
        cout<<b[i][j];
    }cout<<endl;
}
cout<<endl;

}
}