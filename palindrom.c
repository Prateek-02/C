#include <stdio.h>
#include <stdlib.h>
int ispalindrom(int num)
{
    int rev = 0;
    int temp = num;
    while (num > 0)
    {
        int d = num % 10;
        rev = rev * 10 + d;
        num = (int)num / 10;
    }

    printf("The reversed number is: %d\n", rev);

    if(temp==rev)
    {
        printf("It is palindrom\n");
      
    }
    else{
        printf("It is not palindrom\n");
    }
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    ispalindrom(n);
}