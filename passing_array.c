#include <stdio.h>
int func1(int array[]){
    
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d is %d\n",i,array[i]);
    }
    
    return 0;
}

int func2(int* ptr){
        for (int i = 0; i < 4; i++)
    {
        printf("The value of %d is %d\n",i,ptr[i]);
    }
}

int main()
{
    int arr[] = {2, 3, 4, 5};
    printf("The value at index 0 is %d\n",arr[0]);
    func1(arr);
    func2(arr);

    return 0;
}