#include<stdio.h>
#include<string.h>

int main(){
    char s1[20];
    gets(s1);
    char s2[20];
    gets(s2);

    char s3[40];
    strcpy(s3,strcat(s1,s2));
    printf(s3);

    return 0;

}