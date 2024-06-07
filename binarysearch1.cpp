#include<bits/stdc++.h>
using namespace std;

int asecbinsearch(vector<int>&v,int key){

int start=0,mid;
int end=v.size()-1;

while(start<=end){

mid=start+(end-start)/2;
if(v[mid]==key){
    return mid;
}else if(key<v[mid]){
end=mid-1;
}else{
    start=mid+1;
}

}

return -1;
}
int decbinsearch(vector<int>&v,int key){

int start=0,mid;
int end=v.size()-1;

while(start<=end){

mid=start+(end-start)/2;
if(v[mid]==key){
    return mid;
}else if(key<v[mid]){
start=mid+1;
}else{
    end=mid-1;
}

}

return -1;
}

int main(){



int key;cin>>key;
vector<int>v(10);
for(int i=0;i<10;i++){
    cin>>v[i];
}
cout<<decbinsearch(v,key);



}