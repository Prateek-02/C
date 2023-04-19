#include<stdio.h>

/*
struct number{
    int a;
    float b;
}n1,*n2;

int main(){
    n2=&n1;
    scanf("%d",&n2->a);
    scanf("%f",&n2->b);
    printf("%d  %f",n2->a,n2->b);
}
*/

/*
union number{
    int a;
    // char name[20];
    float y;
};

int main(){
    union number n;
    n.a=34;
    printf("%d\n",n.a);
    n.y=34.67894;
    printf("%d\n",sizeof(n));
    printf("%f",n.y);
}
*/



/*
int main(){
    int a=10;
    float b =1.24536;
    void *ptr;
    ptr=&a;
    printf("\n %d",(*(int *)ptr));
    ptr=&b;
    printf("\n%f",(*(float *)ptr));

    getch();
}
*/



int main(){

    int a[] = {1,2,3,4,5};
    int *aptr=a;
    int i;
    printf("%d\n",aptr);           // It gives the memory address
    printf("%d\n",aptr[3]);        // It gives the value
    printf("%d\n",&a[0]);          // & gives the memory address
    // printf("%d %d %d %d %d",*a,*(a+1),*(a+2),*(a+3),*(a+4));
    for(i=0;i<5;i++){
        printf("%d\n",*(a+i));
    }
}