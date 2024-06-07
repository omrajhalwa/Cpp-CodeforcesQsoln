#include<bits/stdc++.h>
using namespace std;
#define int long long
int N=1e5+5;
vector<bool>isprime(N,1);
void sieve(){

isprime[0]=isprime[1]=false;
for(int i=2;i<=N;i++){
    if(isprime[i]==1){
        for(int j=2*i;j<=N;j+=i){
            isprime[j]=false;
        }
    }
}

}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
sieve();
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n);
for(int &x:v){
    cin>>x;
}

vector<int>primerang;
for(int i=2;i<=1e5;i++){
    if(isprime[i]==1){
        primerang.push_back(i);
    }
}
map<int,bool>mp;
bool give=false;
for(int i=0;i<n;i++){
    for(int j=0;j<primerang.size();j++){
        if(primerang[j]*primerang[j]>v[i]){
            break;
        }

        if(v[i]%primerang[j]==0){
            if(mp[primerang[j]]==1){
                give=true;
               
            }else{
                mp[primerang[j]]=1;
            }
        }

        while(v[i]%primerang[j]==0){
            v[i]/=primerang[j];
        }
    }

    if(mp[v[i]]==1&&v[i]>1){
        give=true;
    }else if(v[i]>1){
        mp[v[i]]=1;
    }
}



if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}

}

}