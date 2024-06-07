#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    int t;cin>>t;
    while(t--){
    int n;cin>>n;
    string s;
    cin>>s;
int a=0,b=0;
int op=0,i=0,j=0,rem=0;bool give=true;
while(i<s.size()&&j<s.size()){

if(i<s.size()-1&&s[i]=='('&&s[i+1]==')'){
    op++;
    i=i+2;
}else if(i<s.size()-1&&s[i]==s[i+1]){
    op++;
    i=i+2;
}else{
    if(give){
    j=i+1;give=false;
    }
rem=n-i;
if(s[i]==s[j]){
    i=j+1;
    op++;
    rem=0;
    give=true;
}

    j++;
}


}
cout<<op<<" "<<rem<<endl;

}
}