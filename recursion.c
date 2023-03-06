/* #include<stdio.h>
int sum(int a);
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The sum of %d natural number is: %d ",n,sum(n));
}
int sum(int a){
    if(a==1){
        return 1;
    }
    else{
        return a + sum(a-1);
    }
} */




//Write a recursion function to find the factorial of a number

/* #include<stdio.h>
int fact(int a);
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The factorial of %d is: %d",n,fact(n));
}
int fact(int a){
    if(a==1){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
} */




//Write a recursion function to find the fibonacci series

/* #include<stdio.h>
int fibo(int a);
int main(){
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (i = 0; i<n; i++)
    {
        printf("%d ",fibo(i));
    }
    

}
int fibo(int a){
    if(a==0){
        return 0;
    }
    else if(a==1){
        return 1;
    }
    else{
        return fibo(a-1) + fibo(a-2);
    }
} */




// Write a recursion function to reverse a number

#include<stdio.h>
int reverse(int a);
int main(){
    int n,rev=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d",reverse(n));
}
int rev=0;                //Global Variable
int reverse(int a){

    if(a==0){
        return rev;
    }
    else{
        rev = rev*10+a%10;
        return reverse(a/10);
    }
}