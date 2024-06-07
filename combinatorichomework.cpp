#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;cin>>t;while(t--){
int a,b,c,m;
cin>>a>>b>>c>>m;
vector<int>v;
v.push_back(a);v.push_back(b);v.push_back(c);sort(v.begin(),v.end());
a=v[0];b=v[1];c=v[2];
if(a+b+c-3>=m){
a--;b--;c--;
if(c<m){
    m-=c;
    c=0;
}else{
    c-=m;
    m=0;
}
if(b<m){
    m-=b;
    b=0;
}else{
    b-=m;
    m=0;
}if(a<m){
    m-=a;
    a=0;
}else{
    a-=m;
    m=0;
}
a++;b++;c++;
int mx=max(a,max(b,c));
//cout<<a<<b<<c<<endl;
int total=a+b+c-mx;
//cout<<total<<endl;
if(total+1<mx){
    cout<<"NO"<<endl;
}else{
    cout<<"YES"<<endl;
}


}else{
    cout<<"NO"<<endl;
}

}

}

