#include<bits/stdc++.h>
using namespace std;
using ll=long long;



int main(){

int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<ll>v;
vector<ll>even;
vector<ll>odd;
ll  k=0;
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    v.push_back(k);
    
}for(int i=0;i<n;i++){
    if(v[i]==2||v[i]==4||v[i]==8||v[i]==16){
        even.push_back(v[i]);
        k++;
    }else{
        if(v[i]==6){
            even.push_back(2);
            odd.push_back(3);
        }else if(v[i]==10){
            even.push_back(2);
            odd.push_back(5);
        }else if(v[i]==14){
            even.push_back(2);
            odd.push_back(7);
        }else if(v[i]==12){
            even.push_back(4);
            odd.push_back(3);
        }else{
        odd.push_back(v[i]);
        }
    }
    
}
sort(odd.begin(),odd.end());

ll  ans=1;
for(int i=0;i<even.size();i++){
ans*=even[i];
}
if(odd.size()==0){
    
cout<<ans+even.size()-1<<endl;
}else{

ll sum=0;
for(int i=0;i<odd.size()-1;i++){
    sum+=odd[i];
}
ans=ans*odd[odd.size()-1]+sum+k;

cout<<ans<<endl;

}


}



}