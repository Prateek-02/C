#include<stdio.h>
int main(){
    int a,d,rev=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    int temp = a;
    while (a>0)     
    {
        d = a%10;
        rev = rev*10 + d;
        a = (int)a/10;
    }
    printf("reverse of %d is %d",temp,rev);
    
}