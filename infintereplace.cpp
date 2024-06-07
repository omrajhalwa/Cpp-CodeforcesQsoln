#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){

int t;
cin>>t;
while(t--){
string s;
cin>>s;
string t;
cin>>t;


int a=0,b=0;
for(int i=0;i<t.size();i++){
    if(t[i]=='a'){
        a++;
    }
}for(int i=0;i<s.size();i++){
    if(s[i]=='a'){
        b++;
    }
}
int k ;
k=pow(2,b);
if(t.size()==1&&t[0]=='a'){
    cout<<1<<endl;
}else if(a>0&&t.size()>1){
cout<<-1<<endl;
}else{
    cout<<k<<endl;
}
}

}