#include<stdio.h>
int main(){

    char input;
    float kmToMiles = 0.621371 ;
    float inchesToFoot =  0.0833333;
    float cmsToInches = 0.393701;
    float poundToKgS =  0.453592;
    float inchesTometres = 0.0254;
    float first,second;

    while (1)
    {
        printf("Enter the input character.q to quit:\n 1. kms to miles\n 2. inches to foot\n 3. cms to inche \n 4. pound to kg \n 5. inches to meters\n");
        scanf(" %c",&input);




        switch (input)
        {
        case 'q':
        printf("Quitting the program...");
        goto end;
        break;

        case '1':
        printf("Enter first unit\n");
        scanf("%f",&first);
        second =  first * kmToMiles;
        printf("%f kms is equal to %f miles \n\n", first,second);
        break;

        case '2':
        printf("Enter first unit\n");
        scanf("%f",&first);
        second =  first * inchesToFoot;
        printf("%f inches is equal to %f foot \n\n", first,second);
        break;

        case '3':
        printf("Enter first unit\n");
        scanf("%f",&first);
        second =  first * cmsToInches;
        printf("%f cms is equal to %f inches\n\n", first,second);
        break;

        case '4':
        printf("Enter first unit\n");
        scanf("%f",&first);
        second =  first * poundToKgS;
        printf("%f pounds is equal to %f kgs \n\n", first,second);
        break;

        case '5':
        printf("Enter first unit\n");
        scanf("%f",&first);
        second =  first * inchesTometres;
        printf("%f inches is equal to %f meters \n\n", first,second);
        break;

        default:
            break;
        }
    }
    end:

    return 0;

}