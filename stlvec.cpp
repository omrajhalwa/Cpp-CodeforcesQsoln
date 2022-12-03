#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>v;
cout<<"size->"<<v.capacity()<<endl;
v.push_back(1);
cout<<"size->"<<v.capacity()<<endl;
v.push_back(2);
cout<<"size->"<<v.capacity()<<endl;
v.push_back(3);
cout<<"size->"<<v.capacity()<<endl;

cout<<"element at index 2->"<<v.at(2)<<endl;

cout<<"before pop"<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" "<<endl;
}
v.pop_back();
cout<<"after pop"<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" "<<endl;
}
cout<<"before clear size->"<<v.size()<<endl;
v.clear();
cout<<"after clear size->"<<v.size()<<endl;

vector<int>a(5,1);

for(int i:a){
    cout<<i<<" ";
}cout<<endl;
vector<int>last(a);
for(int i:last){
    cout<<i<<" ";
}cout<<endl;



}