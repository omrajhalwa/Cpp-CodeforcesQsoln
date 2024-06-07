


#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

int n,k;
cin>>n>>k;
string s="";
cin>>s;
vector<int>v(k);
vector<int>c(k);
for(int &x:v){cin>>x;}
for(int &x:c){cin>>x;}
int q;
cin>>q;
vector<int>query(q);
for(int &x:query){cin>>x;}

vector<pair<int,int>>p;
for(int i=0;i<q;i++){
    int start=0,end=k-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(v[mid]<=query[i]&&query[i]<=c[mid]){
            p.push_back({min(query[i],v[mid]+c[mid]-query[i]),max(query[i],v[mid]+c[mid]-query[i])});
            break;
        }else if(v[mid]>query[i]){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
}

sort(p.begin(),p.end());
for(int i=0;i<p.size();i++){
    int a=p[i].first;
    int b=p[i].second;
    if()
    
}
cout<<s<<endl;
}