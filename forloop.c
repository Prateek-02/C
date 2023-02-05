#include<stdio.h>
int main(){
    int num,i,j;
    printf("Enter the number: ");
    scanf("%d",&num);

    for (i = 0,j=0; i,j < num; i++,j++)
    {
        printf("%d %d\n",i,j);
    }
    
    return 0;

}