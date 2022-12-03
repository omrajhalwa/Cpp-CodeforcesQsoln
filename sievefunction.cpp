#include<bits/stdc++.h>
using namespace std;


int N=1000000;
bool sieve[1000001];
void createsieve(){
for(int i=0;i<=N;i++){
    sieve[i]=true;
}for(int i=2;i*i<=N;i++){
    if(sieve[i]==true){
        for(int j=i*i;j<=N;j+=i){
            sieve[j]=false;
        }
    }
}



    
}


int main(){









}