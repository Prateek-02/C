// Ques 1

/* #include<stdio.h>
int main(){
    int i;
    for(i=0;i<5;i++){
        int i =10;
        printf("%d",i);
        i++;
    }
    return 0;
}*/



//Ques 2

/* #include<stdio.h>
int main(){
    int k,num=30;
    k = (num<10)?100:200;
    printf("%d\n",num);
    return 0;
} */



//Ques 3

/* #include<stdio.h>
int main(){
    int a=20,b=15,c=5;
    int d;
    d = a==b+c;
    printf("%d",d);
} */



//Ques 4

/* #include<stdio.h>
int main(){
    int a = 500,b=100,c;
    if(a>=400){
        b=300;
        c=200;
        printf("b=%d c=%d",b,c);
    }
} */



//Ques 5

/* #include<stdio.h>
int main(){
    int i=5;
    int l = i/-4;
    int k = i%-4;
    printf("%d %d\n",l,k);
    return 0;
} */



//Ques 6

/* #include<stdio.h>
int main(){
    int x=11,i;
    for(i=0;i<x;i+=3){
        printf("Start");
        continue;
        printf("End");
    }
    return 0;
} */



//Ques 7

/* #include<stdio.h>
int main(){
    int m=5,n=2;
    m+=--n;
    printf("%d %d",m,n);
    return 0;
} */



//Ques 8

/* #include<stdio.h>
int main(){
    float x = 7.5;
    int y;
    y = (int)(x+0.5);
    printf("%d",y);

} */



//Ques 9

/* #include<stdio.h>
int main(){
    int a = 2,b=5;
    a = a^b;
    b = b^a;
    printf("%d %d",a,b);
    return 0;
} */



//Ques 10

#include<stdio.h>
int main(){
    int a=5,b=-7,c=0,d;
    d = ++a && ++b || ++c;
    printf("\n%d %d %d %d",a,b,c,d); 
}


