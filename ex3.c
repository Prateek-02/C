#include<stdio.h>
int fib_rec(int n){
    if (n == 1 || n ==2){
        return n-1;
    }
    else{
        return fib_rec(n-1) + fib_rec(n-2);
    }
    
}
int fib_iter(int n){
    int a = 0;
    int b = 1;

    for (int i = 0; i < n-1; i++)
    {
        b = a+b;   // b = a+b = 1
        a = b-a;   // a = b-a = 1
    } 
    return a;
}
int main(){
    int num;
    printf("Enter a index to get fibonacci series: ");
    scanf("%d",&num);
    printf("The value of fibonacci number at position no.%d using iterative approach is: %d\n",num,fib_iter(num));
    printf("The value of fibonacci number at position no.%d using recursive approach is: %d",num,fib_rec(num));
    return 0;

}