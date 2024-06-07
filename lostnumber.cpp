#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int n=4;int i=0;
vector<int>c={4,8,15,16,23,42};
vector<int>v(6);
while(n--){
   if(i<2){ cout<<"?"<<" "<<i+1<<" "<<i+1<<endl;
   cout<<flush;
    cin>>v[i];
    v[i]=sqrt(v[i]);
    i++;
   }else{
         cout<<"?"<<" "<<i+1<<" "<<i+2<<endl;
    cout<<flush;
    int a=0;
    cin>>a;
    for(int k=0;k<6;k++){
        for(int j=k+1;j<6;j++){
           if(c[k]*c[j]==a){
               v[i]=c[k];
               v[i+1]=c[j];
               j=6;k=6;
           }
        }
    }i=i+2;
   }
}
cout<<"!"<<" ";
for(auto it:v){
    cout<<it<<" ";
}
cout<<flush;
}