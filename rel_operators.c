#include<stdio.h>
int main(){
    int a = 9;
    int b = 2;
    float c = 23.5;
    double d = 1.23456;

    printf("a > b = %d\n",a>b);
    printf("a < b = %d\n",a<b);
    printf("a >= b = %d\n",a>=b);
    printf("a <= b = %d\n",a<=b);
    printf("a == b = %d\n",a==b);

    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(c));
    printf("%d",sizeof(d));

}