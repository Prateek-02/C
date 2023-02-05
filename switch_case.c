#include<stdio.h>
int main(){

    int age,marks;
    printf("Enter your age: ");
    scanf("%d",&age);

    printf("Enter your marks: ");
    scanf("%d",&marks);

    switch (age)   
    {
    case 3:
        printf("Your age is 3\n");
        switch (marks)
        {
        case 45:
            printf("Your marks is 45");
            break;
        
        default:
            printf("Your marks is not 45");
        }
        break;

    case 13:
        printf("Your age is 13\n");
        switch (marks)
        {
        case 60:
            printf("Your marks is 60");
            break;
        
        default:
            printf("Your marks is not 60");
        }
        break;

    case 23:
        printf("Your age is 23\n");
        switch (marks)
        {
        case 75:
            printf("Your marks is 75");
            break;
        
        default:
            printf("Your marks is not 75");
        }
        break;
    
    default:
        printf("Age is not 3, 13 or 23");
    }

    return 0;
}