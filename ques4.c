// Write a user define function to return the reverse of a number using call by reference method
#include<stdio.h>
int reverse(int *n){
    int d,rev=0;
    int n1=*n;
    while (*n!=0)
    {
        d = *n%10;
        rev = rev*10 + d;
        *n = *n/10;
    }
    if(n1==rev){
        printf("%d",rev);
    }
    else{
        printf("Not a Palindrom");
    }
}
int main(){
    int n1;
    printf("Enter the number: ");
    scanf("%d",&n1);
    reverse(&n1);

}
