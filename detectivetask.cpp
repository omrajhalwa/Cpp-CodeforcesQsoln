#include<bits/stdc++.h>
using namespace std;

int main(){


int t;
cin>>t;
while(t--){
string s;
cin>>s;int zero=s.size(),one=-1;
for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
        one=max(one,i);
    }if(s[i]=='0'){zero=min(zero,i);}
}
if(one!=-1&&zero!=s.size()){
    cout<<zero-one+1<<endl;
}else if(zero!=s.size()){
    cout<<zero+1<<endl;
}else if(one!=-1){
    cout<<s.size()-one<<endl;
}else{
    cout<<s.size()<<endl;
}

}

}