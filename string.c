#include<stdio.h>

void printstr(char str[]){
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c",str[i]);
        i++;
    }
    
}
int main(){
    // char str[] = {'P','r','a','t','e','e','k','\0'};
    char str[8] = "Prateek";     // Value of string must be greater than the length of string by 1
    char str[7] = "Prateek";     //it will also give the garbage value
    printstr(str);
    return 0;
}