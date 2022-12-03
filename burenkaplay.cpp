#include<bits/stdc++.h>
using namespace std;

inline void solve1() {

long long int a,b,c,d,val1,val2;
cin>>a>>b>>c>>d;

val1=a*d;
val2=c*b;
if((a==0&&c==0)||(val1==val2)){
    cout<<0<<endl;
}else if(a==0||c==0){
    cout<<1<<endl;
}else if((val2%val1==0)||(val1%val2==0)){
    cout<<1<<endl;
}else{
    cout<<2<<endl;
}






}


signed main() {
     int t = 1;
     cin >> t;
     while (t--) {
        solve1();
     }
}