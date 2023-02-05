#include<stdio.h>
int main(){

    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

    printf("Your age is : %d\n",age);

    if (age >= 18)
    {
        printf("You can vote!");
    }

    else if(age>=10){
        printf("You are between 10 to 18 and you can vote for kids only");
    }

    else{
        printf("You can't vote!");
    }

    return 0;

    

}