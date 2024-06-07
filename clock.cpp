#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int x;
string s;
cin>>s;cin>>x;
int ans=0;
int a,b;
a=s[0]-'0';
a=a*10+s[1]-'0';
b=s[3]-'0';
b=b*10+s[4]-'0';
int c,d;
c=a;
d=b;
//cout<<a/10<<" "<<a%10<<" "<<b/10<<" "<<b%10;
int  op=0;
while(a!=c||b!=d||op==0){
int i=0;op++;
while(i<x){



b++;
if(b==60){
    b=0;a++;
}if(a==24){
    a=0;
}


i++;
}

// cout<<a/10<<" "<<a%10<<" "<<b/10<<" "<<b%10;
if(a/10==b%10&&a%10==b/10){
    ans++;
   // cout<<a/10<<" "<<a%10<<" "<<b/10<<" "<<b%10;
}

}
cout<<ans<<endl;


}
}