#include<stdio.h>
int main(){
    // int a = 34;
    // int* ptra = &a;
    // char b = '5';
    // char* ptrb = &b; 
   
    // printf("%d\n",ptra);
    // printf("%d\n",ptra+1);

    // printf("%d\n",ptrb);
    // printf("%d\n",ptrb+1);

    int arr[] = {1,2,3,4,5,67};
    printf("value of position 3 of the array is %d\n",arr[3]);
    printf("The address of 1st element of the array is %d\n",&arr[0]);
    printf("The address of 1st element of the array is %d\n",arr);     
    printf("The address of 2nd element of the array is %d\n",&arr[1]);
    printf("The address of 2nd element of the array is %d\n",arr+1);

    printf("The value at address of 1st element of the array is %d\n",*(&arr[0]));
    printf("The value at address of 1st element of the array is %d\n",*(arr));  
    printf("The value at address of 2nd element of the array is %d\n",*(&arr[1]));
    printf("The value at address of 2nd element of the array is %d\n",*(arr+1));
    return 0;
}