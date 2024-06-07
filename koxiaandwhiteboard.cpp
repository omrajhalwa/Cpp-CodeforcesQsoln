#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
priority_queue<int, vector<int>, greater<int> >a;
int v;
for(int i=0;i<n;i++){
    
cin>>v;
a.push(v);
}for(int i=0;i<m;i++){
    cin>>v;
    a.pop();
    a.push(v);
}

int sum=0;
while(!a.empty()){
    sum+=a.top();
    a.pop();
}
cout<<sum<<endl;

}
}