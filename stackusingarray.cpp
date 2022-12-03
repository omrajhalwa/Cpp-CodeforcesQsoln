#include<bits/stdc++.h>
using namespace std;
typedef  int  om ;
typedef long long ln;
struct stack{
int size;
int top;
int *s;

};
void push(stack*st,int x){

if(st->top==st->size-1){
    printf("stack overflow\n");
}else{
    st->top++;
    st->s[st->top]=x;
}


}
int pop(struct stack *st){

int x=-1;
if(st->top==-1){
    printf("underflow condition\n");
}else{
    x=st->s[st->top];
    st->top--;
}
return x;


}
int peek(struct stack st,int pos){
int x=-1;
if(st->top-pos+1<0){
    printf("under flow condition\n");
}else{
    x=st->top-pos+1;
}

return x;

}
int stacktop(stack st){
    if(st->top==-1){
        return -1;
    }else{
        return st->s[st->top];
    }
}int isempty(struct stack st){

    if(st->top==-1){
        return 1;
    }else{
        return 0;
    }
}

int isfull(stack st){


    if(st.top==st->size-1){
        return 1;
    }else{
        return 0;
    }
}



om main(){
struct stack st;
printf("enter size of stack");
scanf("%d",&st.size);
st.s=new int[st.size];
st.top=-1;



}