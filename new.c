#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Before swapping a = %d\n",a);
    printf("Before swapping b = %d\n",b);

    // int c = a;
    // a = b;
    // b = c;
    // printf("After swapping a = %d\n",a);
    // printf("After swapping b = %d\n",b);

    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swapping a = %d\n",a);
    printf("After swapping b = %d\n",b);
}