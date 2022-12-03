
// average by using array

#include<iostream>
using namespace std;

int main(){
  int n,sum=0;
  int A[100];
  cout<<"enter the no of term ";
  cin>>n;
  for(int i=0;i<n;i++){
      cout<<"enter the value of number";
      cin>>A[i];
      sum+=A[i]; 
  }
  cout<<sum/n;
    return 0;
}