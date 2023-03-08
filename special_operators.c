#include<stdio.h>
int main(){
    int a = (1,2,3,4,5);
    double b;
    printf("%d\n",a);
    printf("%d,%d\n",sizeof(a),sizeof(b));
    float pi = 3.14;
    int c = (int)pi;
    printf("%d",c);
}