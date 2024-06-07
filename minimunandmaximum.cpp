#include<bits/stdc++.h>
using namespace std;

int main(){


int t;
cin>>t;
while(t--){
int a,b,c,d;
cin>>a>>b>>c>>d;

if(a<=c&&c<=b){
    cout<<c<<endl;
}else if(c<=a&&a<=d){
    cout<<a<<endl;
}else{
    cout<<a+c<<endl;
}

}


}