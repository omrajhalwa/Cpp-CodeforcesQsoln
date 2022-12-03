#include<iostream>
using namespace std;

int main(){
int n,count=0;
char a[301][301];

cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cin>>a[i][j];
    }
}
int i=1,j=n;
while(i<=n&&j>0){

if(a[i][j]==a[1][1]&&(a[i][i]==a[1][1])){
   
   i++;
   j--;
}else{
   
   count++;
   break;
}
}


for(int i=1;i<=n;i++){
   for(int j=1;j<=n;j++){
      if(i!=j&&i+j!=n+1){
         if(a[i][j]!=a[1][2]){
            count++;
         }
      }
   }
}




if(count==0&&a[1][1]!=a[1][2]){
   cout<<"YES";
}else{
   cout<<"NO";
}


}