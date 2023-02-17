#include<stdio.h>
#include<string.h>
int main(){
    char s1[] = "harry";
    char s2[] = "ravi";
    char s3[54]; 

    // printf(strcat(s1,s2));     // it will concatenate two strings  = harryravi

    printf("The lenght of s1 is %d\n",strlen(s1));            // it will give you the length of the string = 5
    printf("The lenght of s2 is %d\n",strlen(s2));            // it will give you the length of the string = 4

    printf("The reversed string of s1 is %s\n",strrev(s1));         // it will give you the reverse of the string 1
    printf("The reversed string of s2 is %s\n",strrev(s2));         // it will give you the reverse of the string 2

    strcpy(s3,strcat(s1,s2));             // it will copy the string and make a new string
    printf(s3);

printf("The strcmp for s1, s2 returned %d",strcmp(s1,s2));            // it will give value in 0 and 1 form

}