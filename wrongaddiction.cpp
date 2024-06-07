#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
 
vector<int>v;
string a="";
string b="";bool give=true;
cin>>a>>b;
int i=0,j=0;
int p=0;
while(i<a.size()&&give){


if((a[i]-'0')<=(b[j]-'0')&&p==0){
  // cout<<a[i]<<b[j];
    v.push_back((b[j]-'0')-(a[i]-'0'));
    i++;
    j++;
}else{
    if(p==0){
    p=b[j]-'0';
    }
    j++;
    if(j<b.size()){
p=p*10+(b[j]-'0');
    }else{
        give=false;
    }

if((a[i]-'0')<=p){
    v.push_back(p-(a[i]-'0'));
    i++;j++;
    p=0;
}


}

}
while(j<b.size()){
   v.push_back(b[j]-'0');
    j++;
}

if(!give||i<a.size()){
    cout<<-1<<endl;
}else{
    for(auto it:v){
        cout<<it;
    }cout<<endl;
}

}



