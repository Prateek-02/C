//To reverse a number

// #include<stdio.h>
// int main(){
// int a,d,rev = 0;
// printf("Enter the number: ");
// scanf("%d",&a);
// int temp = a;
// while(a>0){
//     int d = a%10;
//     rev = rev*10 + d;
//     a = (int)a/10;
// }printf("The reverse of %d is %d",temp,rev);

// }



//To print the armstrong number
#include<stdio.h>
#include<math.h>
int main(){
    int n,d,count=0,sum=0,temp;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp = n;
    while (n>0)
    {
        n = n/10;
        count = count+1;
    }
    printf("%d\n",count);
    n = temp;
    while(n>0){
        d = n%10;
        sum = sum + pow(d,count);
        n = n/10;
    }
    if (sum==temp){
        printf("It is a armstrong number");
    }
    else{
        printf("Not a armstrong number");
    }
}

