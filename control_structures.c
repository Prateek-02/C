//whether a given input is positive or negative number

// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the number: ");
//     scanf("%d",&a);
//     if  (a>0){
//         printf("Positive number");
//     }
//     else{
//        printf("Negative number");
//     }
//     return 0;
// }




//To check whether given input is divisible by 3 and 5.

// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the number: ");
//     scanf("%d",&a);

//     if (a%3 == 0 && a%5 == 0){
//         printf("%d is divisible by 3 and 5",a);
//     }
//     else if (a%3 == 0 || a%5==0){
//         printf("%d is divisible by 3 or 5",a);
//     }
//     else{
//         printf("%d is not divisible by 3 and 5",a);
//     }

//     return 0;
// }



//To find greatest of three numbers

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter three numbers: ");
//     scanf("%d,%d,%d",&a,&b,&c);

//     if (a>b && a>c){
//         printf("%d is greatest",a);
//     }    
//     else if(b>a && b>c){
//         printf("%d is greatest",b);
//     }    
//     else{
//         printf("%d is greatest",c);
//     }  

//     return 0;    

// }



//Calc the grade for the given marks and find the percentage

// #include<stdio.h>
// int main(){
//     int m1,m2,m3,m4,m5;
//     printf("Enter the marks: ",m1,m2,m3,m4,m5);
//     scanf("%d,%d,%d,%d,%d",&m1,&m2,&m3,&m4,&m5);
//     float per = ((m1+m2+m3+m4+m5)*100.0)/500.0;
//     printf("Percentage Obtained = %f\n",per);
    
//     if (per>80 && per<100){
//     printf("Grade is A");
//     }
//     else if(per>60 && per<79){
//         printf("Grade is B");
//     }
//     else if(per>40 && per<59){
//         printf("Grade is C");
//     }
//     else{
//         printf("Grade is D");
//     }

//     return 0;
// }




//  Print the second largest number

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter the numbers: ",a,b,c);
//     scanf("%d,%d,%d",&a,&b,&c);
    
//     if(a>b && a>c){
//         if(b>c){
//             printf("%d is second largest",b);    
//         }
//         else{
//             printf("%d is second largest",c);
//         }
//     }
//     else if(b>a && b>c){
//         if(a>c){
//             printf("%d is second largest",a);
//         }
//         else{
//             printf("%d is second largest",c);
//         }
//     }
//     else if(c>a && c>b){
//         if(a>b){
//             printf("%d is second largest",a);
//         }
//         else{
//             printf("%d is second largest",b);
//         }
//     }

// }



// #include<stdio.h>
// int main(){
//     int a = 5;
//     a%2==0?printf("even") :printf("odd");
//     return 0;
// }


#include<stdio.h>
int main(){
    int ch;
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    
    default:
        printf("Invalid");
        break;
    }


}



