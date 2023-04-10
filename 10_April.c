#include<stdio.h>

/*
struct person{
    char name[20];
    int age;
    struct student{
        int regno;
    }s;

};

int main(){
    struct person p;
    // struct student s;
    printf("Enter the values: ");
    scanf("%s",&p.name);
    scanf("%d",&p.age);
    scanf("%d",&p.s.regno);
    printf("%s %d %d",p.name,p.age,p.s.regno);
}
*/



/*
struct emp{
    char name[20];
    int empid;
    float salary;
};

void display(struct emp e){
    printf("%s\n",e.name);
    printf("%.2f\n",e.salary);
    printf("%d\n",e.empid);
}

int main(){
    struct emp ep;
    scanf("%s",&ep.name);
    scanf("%d",&ep.empid);
    scanf("%f",&ep.salary);
    display(ep);
}
*/


struct student{
    char name[20];
    int regno;
    float marks[3];
};

void calculate(struct student s){
    printf("%s\n",s.name);
    printf("%d\n",s.regno);
    float s2 = ((s.marks[0]+s.marks[1]+s.marks[2])/3);
}


int main(){
    struct student st;
    scanf("%s",&st.name);
    scanf("%d",&st.regno);
    scanf("%f %f %f",&st.marks[0],&st.marks[1],&st.marks[2]);
    calculate(st);
}