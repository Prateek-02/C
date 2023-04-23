#include<stdio.h>

/*
void printArray(int* A,int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void bubblesort(int* A,int n){
    int temp;
    for(int i=0;i<n-1;i++)            // For number of passes
    {
        for(int j=0;j<n-1-i;j++)      // For comparision in each pass
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }               
        }
    }
}

int main(){
    int A[]={12,54,65,7,23,9};
    int n=6;
    printArray(A,n);       // Printing the array before sorting
    bubblesort(A,n);       // Function to sort the array
    printArray(A,n);       // Printing the array after sorting

}
*/


void printArray(int* A,int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void bubblesort(int* A,int n){
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}
int main(){
    int A[]={12,45,6,78,9,67};
    int n = 6;
    printArray(A,n);
    bubblesort(A,n);
    printArray(A,n);
}