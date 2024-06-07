#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;cin>>t;while(t--){
double a,b,c,d,e,f,g;
cin>>a>>b>>c>>d>>e>>f>>g;

 int i=0;
bool give=false;
if(ceil(c/(b))<=ceil(a/d)){
        give=true;
    }
while(i<=e&&give!=true&&e!=0){


    if(ceil(c/(b+(e-i)*f))<=ceil((a+i*g)/d)){
        give=true;
    }
    i++;
}
if(give){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}


}

}