#include<bits/stdc++.h>
using namespace std;
#define int long long




const int N=1e7+10;
vector<bool>isprime(N,1);

vector<int>lp(N,0);
vector<int>hp(N,0);
signed main(){

isprime[0]=isprime[1]=0;
for(int i=2;i<N;i++){
   
    if(isprime[i]==true){
        lp[i]=hp[i]=i;
        for(int j=2*i;j<N;j+=i){
            isprime[j]=false;
            hp[j]=i;
            if(lp[j]==0){
                lp[j]=i;
            }
        }
    }
}


int n;cin>>n;
for(int i=0;i<n;i++)
{map<int,int>primefactors;
int num;
cin>>num;
int key=num;
while(num>1){
    int primefact=hp[num];
    while(num%primefact==0){
       num/=primefact;
       primefactors[primefact]++;
    }

}
int p=0,ans=1;
for(auto it:primefactors){
 //   cout<<it.first<<" "<<it.second<<endl;
    if(p<2){
        p++;
        ans*=it.first;
    }
}


int start=1,end=1e6;
int answer=-1;

while(start<=end){
    int mid=start+(end-start)/2;
//cout<<mid<<endl;
    if(mid*ans<key){
        answer=mid;
        start=mid+1;
    }else{
        end=mid-1;
    }
}

cout<<ans*((answer*(answer+1))/2)<<" ";

}

}