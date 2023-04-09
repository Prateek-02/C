#include<stdio.h>

//Insertion

/*
int main(){
    int size,i,position,value;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int a[size];

    printf("Enter the %d elemnts: ",size);

    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the position where you want to insert the value: ");
    scanf("%d",&position);

    printf("Enter the value you want to insert: ");
    scanf("%d",&value);

    for(i=size;i>=position-1;i--){
        a[i+1] = a[i];
    }

    a[position-1] = value;

    for(i=0;i<=size;i++){
        printf("%d ",a[i]);
    }

}
*/


//Deletion

int main(){
    int size,i,position;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int a[size];

    printf("Enter %d elements: ",size);

    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the position to be deleted: ");
    scanf("%d",&position);

    for(i=position-1;i<size;i++){
        a[i] = a[i+1];
    }

    for(i=0;i<size-1;i++){
        printf("%d ",a[i]);
    }


}