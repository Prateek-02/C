#include<stdio.h>
int main(){
    int i,size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int a[size];
    
    for(i=0;i<size;i++){
        printf("Enter the %d element of array: ",i);
        scanf("%d",&a[i]);
    }
    
    int s = 0;
    for(i=0;i<size;i++){
        s = s+a[i];
    }
    printf("Sum of elements of array: %d",s);
}