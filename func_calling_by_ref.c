/* #include<stdio.h>
int sum(int *a,int *b);
int main(){
    int a,b;
    printf("Enter the numbers: ");
    scanf("%d,%d",&a,&b);
    int c = sum(&a,&b);
    printf("%d",c);
}
int sum(int *a, int *b){
    return *a+*b;
}  */


#include<stdio.h>
int main(){
    int a = 5;
    int *a1;
    a1 = &a;
    printf("Value of a = %d\n", *a1);
    printf("Memory adress of a = %d\n",&a);
    printf("Value of a = %d\n",a);
    printf("Address of a = %d\n",a1);
}
