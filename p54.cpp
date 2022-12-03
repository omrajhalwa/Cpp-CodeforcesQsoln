#include<bits/stdc++.h>
using namespace std;

int main(){
  //  vector<int>s;
int n,a,b,c;
cin>>n;
 vector<int>s;
 
for(int i=0;i<n;i++){
    cin>>a;
    s.push_back(a);
}

for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        int x=0;
      if(s[j]>s[j+1]){
        x=s[j];
        s[j]=s[j+1];
        s[j+1]=x;
      }

    }
}
for(int i=0;i<n;i++){
    if(s[i]==0){
        c=i;
    }
}

if(c<n-1){
for(int i=0;i<n;i++){
    if(s[i]==0&&i!=n-1){
        a=s[i-1];
        cout<<1<<" "<<a<<endl;
    }
    if(s[i]==0&&i!=n-1){
        b=s[i+1];
        cout<<1<<" "<<b<<endl;
    }}cout<<n-2<<" ";
    for(int i=0;i<n;i++){
        
    if(i!=c-1&&i!=c+1){
        cout<<s[i]<<" ";
    }
}
}else if(c=n-1){


cout<<1<<" "<<s[0];
cout<<endl<<2<<" "<<s[n-2]<<" "<<s[n-3]<<endl;
cout<<n-3<<" "<<0<<" ";
for(int i=1;i<n-3;i++){
    cout<<s[i]<<" ";

}


}
}