#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n);int one=0;
vector<pair<int,int>>p;
for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]==1){
        one++;
    }
}int same=1;
for(int i=0;i<n-1;i++){
    if(v[i]==v[i+1]){
        same++;
    }
}
if(one>0&&one<n){
    cout<<-1<<endl;
}else if(same==n||n==1){
    cout<<0<<endl;
}else{
int mn=INT_MAX,up,down;

for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        int a=v[i],b=v[j];
        while(a!=b){

if(a>b){
    if(a%b==0){
        a=a/b;
    }else{
         a=a/b+1;
    }
    
   // p.push_back(make_pair(1,k+1));
}else{
   if(b%a==0){
        b=b/a;
    }else{
         b=b/a+1;
    } // p.push_back(make_pair(k+1,1));
}
        }
        if(mn>a){
            mn=a;
            up=i;down=j;
        }
    }
}





int a=v[up],b=v[down],k;

while(a!=b){

if(a>b){
    if(a%b==0){
        a=a/b;
    }else{
         a=a/b+1;
    }
    
    p.push_back(make_pair(up+1,down+1));
}else{
   if(b%a==0){
        b=b/a;
    }else{
         b=b/a+1;
    }  p.push_back(make_pair(down+1,up+1));
}
}v[down]=b;
v[up]=a;
a=v[up];
for(int i=0;i<n;i++){
    if(i!=up){
b=v[i];

    while(a!=b){

if(a>b){
    if(a%b==0){
        a=a/b;
    }else{
         a=a/b+1;
    }
    
    p.push_back(make_pair(up+1,i+1));
}else{
   if(b%a==0){
        b=b/a;
    }else{
         b=b/a+1;
    }  p.push_back(make_pair(i+1,up+1));
}
}v[i]=b;}

}



cout<<p.size()<<endl;
for(auto it:p){
    cout<<it.first<<" "<<it.second<<endl;
}



}



}


}