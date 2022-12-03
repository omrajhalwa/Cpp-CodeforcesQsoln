#include<stdio.h>
#include<stdlib.h>


struct Node{
int data;
struct Node*next;

}*p;

void create(int a[],int n){
    p=(struct Node*)malloc(sizeof(struct Node));
struct Node*first,*k;

p->data=a[0];
p->next=NULL;
k=p;
for(int i=1;i<n;i++){
    first=(struct Node*)malloc(sizeof(struct Node));

    first->data=a[i];
    first->next=NULL;
    k->next=first;
    k=k->next;
    
}



}
void display(){

while(p!=NULL){
    printf(" %d ",p->data);
    p=p->next;
}



}






int main(){

int a[]={1,2,3,4,5};
create(a,5);
display();


}