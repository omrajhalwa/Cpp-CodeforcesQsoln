#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
int w,d,h,a,b,f,g;
cin>>w>>d>>h>>a>>b>>f>>g;

int ans1,ans2,ans;
ans1=abs(a-f)+min(b+g,2*d-(b+g));
ans2=abs(b-g)+min(a+f,2*w-(a+f));
ans=min(ans1,ans2)+h;
cout<<ans<<endl;

}

}