#include<stdio.h>
/*
int main(){
    FILE *fptr;
    char ch,h1;
    scanf("%c",&ch);
    fptr=fopen("Zero.txt","w");
    fputc(ch,fptr);
    fclose(fptr);
    fptr=fopen("Zero.txt","r");
    h1=fgetc(fptr);
    printf("Value = %c",h1);
    fclose(fptr);
}
*/

//Create a structure book which contains name,year,price;

struct book{
    char name;
    int year;
    float price;
}n1;

int main(){
    FILE *f1;
    printf("Enter the values: ");
    scanf("%s",&n1.name);
    scanf("%d",&n1.year);
    scanf("%f",&n1.price);

    f1 = fopen("Zero.txt","w+");
    fwrite(&n1,sizeof(n1),1,f1);
    fread(&n1,sizeof(n1),1,f1);
    printf("%s  %d  %f",n1.name,n1.year,n1.price);
    fclose(f1);
}
