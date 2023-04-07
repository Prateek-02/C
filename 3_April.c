//          STRUCTURES

/* #include<stdio.h>
struct number{
    int x;
    float y;
};
int main(){
    struct number n1;
    n1.x=24;
    n1.y=24.7893;
    printf("%d  %f\n",n1.x,n1.y);

    struct number n2={23,34.567};
    printf("%d   %f",n2.x,n2.y);
} */




/* #include<stdio.h>
struct car{
    char name[20];
    int year;
    float price;
};
int main(){
    struct car c1={"BMW",2018,8900000.50};
    c1.year = 2019;     //overwrites the old value
    printf("%s  %d  %f",c1.name,c1.year,c1.price);
} */




/* #include<stdio.h>
struct car{
    char name[20];
    int year;
    float price;
};
int main(){
    struct car c1;
    printf("Enter the values for name,year,price: ");
    gets(c1.name);
    scanf("%d",&c1.year);
    scanf("%f",&c1.price);
    printf("%s  %d  %f",c1.name,c1.year,c1.price);
} */




//Create a structure student which contains name,rollnumber and marks of 3 subjects

/* #include<stdio.h>
struct student{
    char name[20];
    int roll;
    float marks[3];
};

int main(){
    struct student s1;
    int i;
    printf("Enter the values for name,roll,marks: ");
    gets(s1.name);
    scanf("%d",&s1.roll);
    for(i=0;i<3;i++){
        scanf("%f",&s1.marks[i]);
    }
    printf("%s  %d  ",s1.name,s1.roll);
    for(i=0;i<3;i++){
        printf("%f ",s1.marks[i]);
    }
} */




// Create a structure employee which contain emp name,emp id,salary


#include<stdio.h>
struct employee{
    char name[200];
    int id,salary;
};

int main(){
    struct employee e1[5];
    int i;
    for(i=0;i<5;i++){
        scanf("%s",e1[i].name);
        scanf("%d",&e1[i].id);
        scanf("%d",&e1[i].salary);
    }
    for(i=0;i<5;i++){
        printf("Name of employee %d is %s\n",i+1,e1[i].name);
        printf("Id of employee %d is %d\n",i+1,e1[i].id);
        printf("Salary of employee %d is %d\n",i+1,e1[i].salary);

    }
}



