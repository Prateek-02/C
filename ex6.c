#include<stdio.h>
#include<string.h>
int main(){
    char *lower[100] = {"one","two","three","four","five","six","seven","eight","nine"};
    int a,b;
    scanf("%d %d",&a, &b);
    for (int i = a; i <= b; i++)
    {
        if (i<=9){
            printf("%s\n",lower[i]);
        }
        else if(i%2==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
    }
    return 0;
    
}