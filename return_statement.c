/* #include<stdio.h>
int sum();              // It is a prototype
int main(){       
    int c = sum();      // Calling of function
    printf("The sum is %d",c);
}
int sum(){              // Definiton of a function
    int a,b;
    printf("Enter the numbers: ");
    scanf("%d,%d",&a,&b);
    return a+b;
} */


// Write a user defined function to find the sum of N natural numbers and return the value

/* #include<stdio.h>
int sum();
int main(){
    printf("%d",sum());
}
int sum(){
    int n,sum = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    return sum;
    
} */



// Create two user defined function. One function to check the given number is positive or negative and if the value is positive return the value to the another function and check whether it is even or odd and print the value

#include<stdio.h>
int pos_neg();
int even_odd();
int main(){
    even_odd();
}
int pos_neg(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n>0){
        return n;
    }
    else{
        return 0;
    }
}

int even_odd(){
    int a = pos_neg();
    if(a>0){
        if(a%2==0){
            printf("The number is even\n");
        }
        else{
            printf("The number is odd");
        }
    }
    else{
        printf("The number is negative");
    }
}