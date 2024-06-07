#include <stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int fun(int n,int arr[]){



    return arr[n];
}


int main()
{
    int n;
    cin>>n;
    
   int arr[n];
   for(int i=0;i<3;i++){
    cin>>arr[i];
   }

   cout<<fun(n,arr);


}