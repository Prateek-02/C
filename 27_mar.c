// Write a c program to perform the addition of two 1D array and store it in a new array

/* #include<stdio.h>
int main(){
    int size,i;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int a1[size],a2[size],a3[size];
    for(i=0;i<size;i++){
        scanf("%d",&a1[i]);
    }
    for(i=0;i<size;i++){
        scanf("%d",&a2[i]);
    }
    for(i=0;i<size;i++){
        a3[i] = a1[i]+a2[i];
        printf("%d ",a3[i]);
    }
} */




//Inserting a new element in the array

/* #include<stdio.h>
int main(){
    int array[100], n,i,position,value;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the position where you wish to insert an element: ");
    scanf("%d",&position);
    printf("Enter the value to insert: ");
    scanf("%d",&value);
    for(i=n;i>=position-1;i--){
        array[i+1]=array[i];
    }
    array[position-1] = value;
    printf("Resultanat array is: ");
    for(i=0;i<=n;i++){
        printf("%d ",array[i]);
    }
} */




// Deleting an element from array

/* #include<stdio.h>
int main(){
    int a[100],n,i,position;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the values for array A: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the position to be deleted: ");
    scanf("%d",&position);
    for(i=position-1;i<n;i++){
        a[i] = a[i+1];
    }
    for(i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }
} */




// 2-D ARRAY

#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("Enter the number of column: ");
    scanf("%d",&m);
    int a[n][m],i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("First diagonal elements: ");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        if(i==j)   // First diagonal element
        printf("%d\t ",a[i][j]);
    }
    }
    printf("\nSecond Diagonal elements: ");

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i+j==n-1)  // Second diagonal element
            printf("%d\t ",a[i][j]);
        }
    }
    printf("\nTranspose of matrix:\n");

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

}