/* Function calling by value

#include<stdio.h>
int num(int n);
int main(){
    int n1;
    printf("Enter the number: ");
    scanf("%d",&n1);
    printf("%d",num(n1));
}
int num(int n){
    if(n%2==0){
        return n;
    }
    else{
        return 0;
    }
}   */




// To find the greatest of three numbers using call by value method

/* #include<stdio.h>
int num(int a, int b, int c);
int main(){
    int n1,n2,n3;
    printf("Enter the numbers: ");
    scanf("%d,%d,%d",&n1,&n2,&n3);
    printf("%d",num(n1,n2,n3));
}
int num(int a,int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
} */


#include<stdio.h>
int num(int n);
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    num(a);
}
int num(int n){
    switch (n)
    {
    case 1:
            printf("One");
        break;
    
    case 2:
            printf("Two");
        break;
    
    case 3:
            printf("Three");
        break;
    
    case 4:
            printf("Four");
        break;
    
    case 5:
            printf("Five");
        break;
    
    case 6:
            printf("Six");
        break;
    
    case 7:
            printf("Seven");
        break;

    default:
        printf("Invalid input");
        break;
    }
}