#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
}*top=NULL;



void push(int x){
    node *t=new node;
    if(t==NULL){
        printf("stack underflow");
    }else{
        t->data=x;
        t->next=top;
        top=t;
    }
}
int pop(){
    int x=-1;node *p;
    if(top==NULL){
        printf("underflow condition\n");
    }else{
        p=top;
        top=top->next;
        x=p->data;
        free(p);
    }

return x;

}int peek(int pos){
int i;
node *p=top;
for(int i=0;i<pos-1&&p!=NULL;p=p->next,i++){

}if(p==NULL){
    return -1;
}else{
    return p->data;
}


}
int stacktop(){
    if(top){
        return top->data;
    }else{
        return -1;
    }
}
void display(node *top){
    node *m;
m=top;
    while(m!=NULL){
        cout<<m->data<<" ";
        m=m->next;
    }
}

int main(){
push(1);
push(2);
push(3);
push(4);
push(5);

display(top);


}