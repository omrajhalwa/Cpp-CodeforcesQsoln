#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
char op;cin>>op;
string s="";
cin>>s;
vector<char>b;
b.push_back('0');
int p=0,k=0;
for(int i=0;i<n;i++){
    if(i<n-1&&op!=s[i]){
        p++;
    }if(i==n-1&&op!=s[i]){
      k++;
    }
    b.push_back(s[i]);
}
vector<int>v;

   bool give=true;
   //nlogn
    for(int i=2;i<=n;i++){

        for(int j=i;j<=n;j+=i){
         if(j%i==0&&b[j]==op){
 
         }else{
            give=false;
         }
        }
        if(give){
            v.push_back(i);
            i=n+1;
        }
        give=true;
    }




if(p==0&&k==0){
    cout<<0<<endl;
}else if(p!=0&&k==0){
    cout<<1<<endl;
    cout<<n<<endl;
}else if(v.size()>0){//.....................
    cout<<1<<endl;
    cout<<v[0]<<endl;
}else{
    cout<<2<<endl;
    cout<<n<<" "<<n-1<<endl;
}



}

}