#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
 ios::sync_with_stdio(false); cin.tie(0);
//.............................................................
int t;cin>>t;while(t--){
int n;cin>>n;
int a[n+1][n+1];
int b[n+1][n+1];
int c[n+1][n+1];
int d[n+1][n+1];
for(int i=0;i<n;i++){
    string s="";cin>>s;
    for(int j=0;j<n;j++){
a[i][j]=s[j]-'0';
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        b[j][n-(i+1)]=a[i][j];
    }
}for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        c[n-(i+1)][n-(j+1)]=a[i][j];
    }
}for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        d[n-(j+1)][i]=a[i][j];
    }
}for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        a[i][j]=a[i][j]+b[i][j]+c[i][j]+d[i][j];
    }
}


int sum=0;
for(int i=0;i<(n+2-1)/2;i++){
    for(int j=0;j<(n+2-1)/2;j++){
       // cout<<i<<j<<endl;
        if(n%2!=0){
            if(j!=(n+1)/2-1){
sum+=min(4-a[i][j],a[i][j]);
//cout<<i<<j<<endl;
}
        }else{
            sum+=min(4-a[i][j],a[i][j]);
        }
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      // cout<<a[i][j]<<" ";
    }//cout<<endl;
}
cout<<sum<<endl;
}
}