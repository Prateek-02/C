#include<stdio.h>
#include<string.h>

/*
int main(){
    char ch[20];
    // scanf("%s",ch);      // it will not read white spaces
    // printf("%s",ch);
    gets(ch);     //it will read white spaces
    puts(ch);
}
*/

/*
int main(){
    char ch[]="apple";
    char *str=ch;
    printf("%s\n",str);
    printf("%s",ch);
}
*/


int main(){
    char ch[]="apple@123";
    // char *str=ch;
    char str1[3];
    // strcpy(str1,ch);   // copy the all characters
    strncpy(str1,ch,4);   // copy number to characters given
    printf("%s\n",str1);
    printf("%s",strncat(str1,ch,2));
    // printf("%s\n",ch);
    // printf("%d",strlen(ch));


}