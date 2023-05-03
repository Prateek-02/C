#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *arr = (char *) malloc(1000 * sizeof(char));
    if (arr == NULL) {
        printf("Error: Unable to allocate memory!\n");
        return 1;
    }

    char str[100];
    printf("Enter a string: ");
    gets(str);

    int len = strlen(str);
    if (len > 1000) {
        printf("Error: String too long to fit in array!\n");
        return 1;
    }

    strncpy(arr, str, len); 
    arr[len] = '\0'; 

    arr = (char *) realloc(arr, (len + 1) * sizeof(char));
    if (arr == NULL) {
        printf("Error: Unable to reallocate memory!\n");
        return 1;
    }

    printf("The string \"%s\" has been inserted into the array.\n", arr);
    free(arr);
    printf("%d",strlen(str));

    return 0;
}
