#include<stdio.h>
void ispalindrom(int num)
{
    int rev=0,i,temp,count=0;
    temp = num;
    while(num!=0)
    {
        int d = num%10;
        rev = rev*10 + d;
        num = (int)num/10;
    }
    printf("Reverse of the %d is: %d\n",temp,rev);

    if(temp==rev)
    {
        for(i=1;i<=rev;i++)
        {
            if(rev%i==0)
            {
                count++;
            }
        }
        if (count==2)
        {
            printf("It is Palindromic Prime Number");
        }
        else
        {
            printf("It is not Palindromic Prime Number");
        }
    }
}


int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    ispalindrom(n);
    return 0;
}