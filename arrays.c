#include<stdio.h>
int main(){
    int marks[2][4] = {{45,65,75,89},{67,56,76,86}};

// for (int i = 0; i < 4; i++)
// {
//     printf("Enter the value of %d element of the array\n",i);
//     scanf("%d",&marks[i]);
// }
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 4; j++)
    {
        /* code */
    
    // printf("The value of %d,%d element of the array is %d\n",i,j,marks[i][j]);
    printf("%d ",marks[i][j]);
    }
    printf("\n");
}


    // marks[0] = 34;
    // printf("marks of student 1 is %d\n", marks[0]);
    // marks[1] = 44;
    // printf("marks of student 2 is %d\n", marks[1]);
    return 0;
}