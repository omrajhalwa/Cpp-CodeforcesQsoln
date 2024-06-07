#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
int n,k;
cin>>k>>n;
int num=1,p=0;
vector<int>v;
vector<int>c;
for(int i=1;i<=n&&p<k;i++){
    
if(num<=n){
v.push_back(num);
    p++;
}
num=num+i;
}


for(int j=1;j<=n;j++){
    int l=0;
for(int i=0;i<v.size();i++){
if(j==v[i]){
    l++;
}

}
if(l==0){
    c.push_back(j);
}

}
int o=1;

sort(c.begin(),c.end());
while(p<k){
    v.push_back(c[c.size()-o]);
    o++;p++;
}

sort(v.begin(),v.end());
for(int i=0;i<k;i++){
    cout<<v[i]<<" ";
}


cout<<endl;
}


}