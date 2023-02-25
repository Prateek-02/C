/* #include<stdio.h>
void sum(){
    int a,b;
    printf("Enter the values: ");
    scanf("%d,%d",&a,&b);
    printf("sum = %d ",a+b);
}
int main(){
    sum();
    printf("\nhello world!");
}*/


// To print the factors of a given number

/* #include<stdio.h>
void factors(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0){
            printf("%d\n",i);
        }
        else{
            continue;
        }
    }
}

int main(){
    factors();
}*/



// To count the number of digits in a given number

#include<stdio.h>  
void count(){
    int n,total=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    int temp = n;
    for (int i = 0; i <=n; i++)
    {
        int d = n%10;
        total = total + d;
        n = (int)n/10;
    }
    printf("%d",temp);
}
int main(){
    void count();
}