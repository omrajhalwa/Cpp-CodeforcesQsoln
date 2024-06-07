#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n,m,k;cin>>n>>m>>k;
string a="";cin>>a;
string b="";cin>>b;
sort(a.begin(),a.end(),greater<char>());
sort(b.begin(),b.end(),greater<char>());

int f=0,s=0;
string p="";
while(!a.empty()&&!b.empty()){

 if(a[a.size()-1]<b[b.size()-1]&&f<k){
     f++;
    s=0;
    p.push_back(a[a.size()-1]);
    a.pop_back();
}else if(a[a.size()-1]>b[b.size()-1]&&s<k){
    f=0;s++;
p.push_back(b[b.size()-1]);
b.pop_back();
}else if(f<k){
    f++;
    s=0;
    p.push_back(a[a.size()-1]);
    a.pop_back();

}else if(s<k) {
f=0;s++;
p.push_back(b[b.size()-1]);
b.pop_back();
}


}


cout<<p<<endl;
}

}