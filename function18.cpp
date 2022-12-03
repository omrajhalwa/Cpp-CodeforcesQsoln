#include<iostream>
using namespace std;

int search(int A[],int n,int key){
    for( int i=0;i<n;i++){
        if(key==A[i])
        return i;
    }return 0;
}

int main(){
    int A[]={2,4,5,7,1,6,8};
    int k;
    cout<<"enter the value of k"<<endl;
    cin>>k;
    int index =search(A,7,k);
    cout<<index<<endl;
}



