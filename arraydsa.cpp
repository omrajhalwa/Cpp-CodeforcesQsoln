#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int A[10];
    int size;
    int length;

};
void display(struct Array arr){
    int i;
    printf("\nelement are\n");
    for(i=0;i<arr.length;i++)
    printf("%d ",arr.A[i]);
}
void Append(struct Array *arr,int index,int x){
    int i;
    if(index>=0 &&index<=arr->length){
        for(i=arr->length;i>index;i--)
        arr->A[i]=arr->A[i-1];
        arr->A[index]=x;

    }
}
void insert(struct Array *arr,int index,int x){
    int i;
    if(index>=0&&index<=arr->length){
        for(i=arr->length;i>index;i--)
        arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
    }
}
int Delete(struct Array *arr,int index){
    int x=0;
    int i;
    if(index>=0&&index<arr->length){
        x=arr->A[index];
        for(i=index;i<arr->length-1;i++)
        arr->A[i]=arr->A[i+1];
        arr->length--;
        return x;
    }
    return 0;
}

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int linearsearch(struct Array *arr,int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i],&arr->A[0]);
            return 0;
        }
        
    }return -1;
}
int binarysearch(struct Array arr,int key){
    int l=0,h=arr.length-1,mid;

while(l<=h){
    mid=(l+h)/2;
    if(arr.A[mid]==key){
        return mid;
    }else if(arr.A[mid]>key){
        h=mid-1;
    }else{
        l=mid+1;
    }
    return -1;
}
/*int Rbinarysearch(int a[],int l,int h,int key){

    int mid;
    if(l<=h){
        mid=(l+h)/2;
        if(key==a[mid]){
        return mid;
        }else if(key<a[mid]){
            return Rbinarysearch(a,l,mid-1,key);
        }else{
        return Rbinarysearch(a,mid+1,h,key);
        }

    }
    return -1;
    }
*/



int main(){
    struct Array arr{{1,2,3,4,5},10,5};
   insert(&arr,0,123);
    printf("fount at index- %d",binarysearch(arr,4));
    //display(arr);

}
