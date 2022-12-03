#include<iostream>
#include<cstring>
using namespace std;

int main(){
char s[102];
int n,i,a,b;
 cin>>n;
    for(i=0;i<=n!=0;i++){
        cin.getline(s,102);
         b=strlen(s);
        a=strlen(s)-1;
    if(b>10)
    cout<<s[0]<<strlen(s)-2<<s[a]<<endl;
    else
    cout<<s<<endl;
    }

return 0;
}
