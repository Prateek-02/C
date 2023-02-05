#include<stdio.h>
int main(){

    int num,i=1;
    printf("Enter the number: ");
    scanf("%d",&num);

    do{
        printf("%d\n",i);
        i+=1;
    }while(i<=num);

    return 0;

}