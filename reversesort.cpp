#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
int n;
cin>>n;
string s;
cin>>s;
string b;
b=s;
sort(b.begin(),b.end());
int zero=0,one=0,un=0;
vector<int>v;
for(int i=0;i<s.size();i++){
    if(s[i]!=b[i]){
        un++;
        v.push_back(i+1);
        if(s[i]=='0'){
            zero++;
        }
    }
}

//cout<<un<<zero<<endl;
if(is_sorted(s.begin(),s.end())){
    cout<<0;
}else{
    cout<<1<<endl;
    cout<<v.size()<<" ";
for(auto it:v){
    cout<<it<<" ";
}
}cout<<endl;

}

}