#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
for(int i=n-2;i>0;i--){
    cout<<i<<" ";
}cout<<n-1<<" "<<n<<endl;
        }else{
            cout<<n-1<<" ";
            for(int i=n-3;i>0;i--){
                cout<<i<<" ";
            }cout<<n-2<<" "<<n<<endl;


        }









}
}