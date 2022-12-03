#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int n;
cin>>n;
cin>>s;
int a=0,b=0,c=0;
for(int i=0;i<n;i++){
    if(s[i]=='R'||s[i]=='L'){
        a++;
    }if(s[i]=='L'){
        b++;
    }if(s[i]=='R'&&c<1){
        c=i;
    }
}
cout<<c+1<<" "<<a+c-b;


}