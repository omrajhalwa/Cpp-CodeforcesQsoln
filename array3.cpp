#include<iostream>
using namespace std;

int main(){
int A[10]={6,8,13,17,20,22,25,28,30,55};
int l=0,h=9,key,mid;

cout<<"enter key";
cin>>key;
while(l<=h)

{mid=(l+h/2);
if(key==A[mid]){
    cout<<"found at"<<mid;
    }
else if(key<A[mid]){
    h=mid-1;
}
else l=mid+1;



cout<<"not found";}
return 0;
}