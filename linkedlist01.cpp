#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *next;
}*first;

void create(int a[],int n){
    struct node *t,*last;
    first=(struct node*)malloc(sizeof(struct node));
     first->data=a[n-1];
     first->next=NULL;
     last=first;
     int i=1;
     
     for(int i=n-2;i>=0;i--){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
     }
     
}
void display(struct node *t){
    while(t!=NULL){
        printf("%d ",t->data);
        t=t->next;
    }
}

void rev(struct node *q,struct node *p){
    if(p!=NULL){
        rev(p,p=p->next);
        p->next=q;
    }else{
        first=q;
    }

}



int main(){

int a[]={3,5,7,9,11};
int c=5;
create(a,c);
//display(first);
rev(0,first);
display(first);


}