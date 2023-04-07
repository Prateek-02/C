// Programe to display the elements of the ARRAY

/* #include<stdio.h>
int main(){
    int i;
    int a[5] = {1,2,3,4,5};
    for(i=0;i<5;i++){
        printf("%d - %d\n",i,a[i]);
    }
} */




//Write a c programe to get the input and print the ARRAY

/* #include<stdio.h>
int main(){
    int i;
    int a[5];
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
} */




//Write the c programe to find the sum of an array

/* #include<stdio.h>
int main(){
    int i,sum=0;
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
        sum += a[i];
    }
    // for(i=0;i<5;i++){
    //     sum = sum+a[i];
    // }
    printf("SUM = %d",sum);
} */




//Write a c programe to print the even position's values from ARRAY

/* #include<stdio.h>
int main(){
    int size,i;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
        if(i%2==0){
            printf("%d\n",a[i]);
        }
    }
} */




// Cosider two arrays. Get user input for first array and modify and store inside 2nd array and display both

/* #include<stdio.h>
int main(){
    int i,size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int a1[size],a2[size];
    for(i=0;i<size;i++){
        scanf("%d",&a1[i]);
    }
    for(i=0;i<size;i++){
        a2[i] = a1[i]*a1[i];
    }
    for(i=0;i<size;i++){
        printf("%d\t",a1[i]);
    }
    printf("\n");
    for(i=0;i<size;i++){
        printf("%d\t",a2[i]);
    }

} */




#include<stdio.h>
int sum(int b[],int size);
int main(){
    int i,size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    sum(a,size);
}
int sum(int b[],int size){
    int i,s=0;
    for(i=0;i<size;i++){
        s=s+b[i];
        return s;
    }

}