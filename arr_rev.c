/*
#include<stdio.h>
void arrayrev(int arr[]){
    int temp;
    for (int i = 0; i < 4; i++)
    {
        temp = arr[i];
        arr[i] = arr[6-i];
        arr[6-i] = temp;
    }
}
void arrayprint(int arr[]){
        for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n",i,arr[i]);
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    printf("Before reversing the array\n");
    arrayprint(arr);
    arrayrev(arr);

    printf("\nAfter reversing the array\n");
    arrayprint(arr);
    return 0;
}
*/

//Method 2

#include<stdio.h>
int main(){
    int size,i;
    printf("Enter the size of array:" );
    scanf("%d",&size);
    int a[size];

    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    int rev[size],j=0;
    for(i=size-1;i>=0;i--){
        rev[j] = a[i];
        j++;
    }

    for(i=0;i<size;i++){
        printf("%d ",rev[i]);
    }
}