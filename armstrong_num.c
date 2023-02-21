#include<stdio.h>
#include<math.h>
int main(){
    int a,d,l=0,sum=0,temp;
    printf("Enter the number: ");
    scanf("%d",&a);
    temp = a;
    while(a>0){
        a = a/10;
        l++;
    }
    printf("%d\n",l);
    a = temp;
    while(a>0){
        d = a%10;
        sum = sum + pow(d,l);
        a = a/10;
    }

    if(sum==temp){
        printf("It is a armstrong number");
    }
    else{
        printf("Not a armstrong number");
    }
}