#include<iostream>
using namespace std;

int main(){
char p,q,r,s,d;
cin>>p>>q>>d>>r>>s;
if(p<49&&q<49&&r<54&&s<58){
    cout<<'0'<<'1'<<':'<<'1'<<'0';
            }else if(p<49&&q<50&&r<49&&s<58){
                cout<<'0'<<'1'<<':'<<'1'<<'0';
            }
  else if(p<49&&q<50&&r<54&&s<58){
        
     cout<<'0'<<'2'<<':'<<'2'<<'0';
     
 }else if(p<49&&q<51&&r<50&&s<58){
        
     cout<<'0'<<'2'<<':'<<'2'<<'0';
     
 }
else if(p<49&&q<51&&r<54&&s<58){
     cout<<'0'<<'3'<<':'<<'3'<<'0';
 }else if(p<49&&q<52&&r<51&&s<58){
     cout<<'0'<<'3'<<':'<<'3'<<'0';
 }else if(p<49&&q<52&&r<54&&s<58){
     cout<<'0'<<'4'<<':'<<'4'<<'0';
 }else if(p<49&&q<53&&r<52&&s<58){
     cout<<'0'<<'4'<<':'<<'4'<<'0';
 }else if(p<49&&q<53&&r<54&&s<58){
     cout<<'0'<<'5'<<':'<<'5'<<'0';
 }else if(p<49&&q<54&&r<53&&s<58){
     cout<<'0'<<'5'<<':'<<'5'<<'0';
 }
 else if(p<49&&q<58&&r<54&&s<58){
     cout<<'1'<<'0'<<':'<<'0'<<'1';
 }else if(p<50&&q<49&&r<49&&s<49){
     cout<<'1'<<'0'<<':'<<'0'<<'1';
 }else if(p<50&&q<49&&r<54&&s<58){
     cout<<'1'<<'1'<<':'<<'1'<<'1';
 }else if(p<50&&q<50&&r<49&&s<58){
     cout<<'1'<<'1'<<':'<<'1'<<'1';
 }else if(p<50&&q<50&&r<50&&s<49){
     cout<<'1'<<'1'<<':'<<'1'<<'1';
 }else if(p<50&&q<50&&r<54&&s<58){
     cout<<'1'<<'2'<<':'<<'2'<<'1';
 }else if(p<50&&q<51&&r<50&&s<58){
     cout<<'1'<<'2'<<':'<<'2'<<'1';
 }else if(p<50&&q<51&&r==50&&s==48){
     cout<<'1'<<'2'<<':'<<'2'<<'1';
 }else if(p<50&&q<51&&r<54&&s<58){
     cout<<'1'<<'3'<<':'<<'3'<<'1';
 }else if(p<50&&q<52&&r<51&&s<58){
     cout<<'1'<<'3'<<':'<<'3'<<'1';
 }else if(p<50&&q<52&&r==51&&s==48){
     cout<<'1'<<'3'<<':'<<'3'<<'1';
 }else if(p<50&&q<52&&r<54&&s<58){
     cout<<'1'<<'4'<<':'<<'4'<<'1';
 }else if(p<50&&q<53&&r<52&&s<58){
     cout<<'1'<<'4'<<':'<<'4'<<'1';
 }else if(p<50&&q<53&&r==52&&s==48){
     cout<<'1'<<'4'<<':'<<'4'<<'1';
 }else if(p<50&&q<53&&r<54&&s<58){
     cout<<'1'<<'5'<<':'<<'5'<<'1';
 }else if(p<50&&q<54&&r<53&&s<58){
     cout<<'1'<<'5'<<':'<<'5'<<'1';
 }else if(p<50&&q<54&&r==53&&s==48){
     cout<<'1'<<'5'<<':'<<'5'<<'1';
 }else if(p<50&&q<58&&r<54&&s<58){
     cout<<'2'<<'0'<<':'<<'0'<<'2';
 }else if(p<51&&q<49&&r<49&&s<50){
     cout<<'2'<<'0'<<':'<<'0'<<'2';
 }else if(p<51&&q<49&&r<54&&s<58){
     cout<<'2'<<'1'<<':'<<'1'<<'2';
 }else if(p<51&&q<50&&r<50&&s<50){
     cout<<'2'<<'1'<<':'<<'1'<<'2';
 }else if(p<51&&q<50&&r<54&&s<58){
     cout<<'2'<<'2'<<':'<<'2'<<'2';
 }else if(p<51&&q<51&&r<51&&s<50){
     cout<<'2'<<'2'<<':'<<'2'<<'2';
 }else if(p<51&&q<51&&r<50&&s<58){
     cout<<'2'<<'2'<<':'<<'2'<<'2';
 }else if(p<51&&q<51&&r<54&&s<58){
     cout<<'2'<<'3'<<':'<<'3'<<'2';
 }else if(p<51&&q<52&&r<52&&s<50){
     cout<<'2'<<'3'<<':'<<'3'<<'2';
 }else if(p<51&&q<52&&r<51&&s<58){
     cout<<'2'<<'3'<<':'<<'3'<<'2';
 }else {
     cout<<'0'<<'0'<<':'<<'0'<<'0';
 }



}