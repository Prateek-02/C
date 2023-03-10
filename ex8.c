#include<stdio.h>
typedef struct Driver
{
    char name[34];
    char dlNo[34];
    char route[47];
    int kms;
} dr;
int main()
{
dr d1,d2,d3;
printf("Enter the details of the driver No 1\n");
printf("Enter the name of first driver: \n");
scanf("%s",&d1.name);

printf("Enter the dlNo of first driver: \n");
scanf("%s",&d1.dlNo);

printf("Enter the route of first driver: \n");
scanf("%s",&d1.route);

printf("Enter the number of kms of first driver: \n");
scanf("%d",&d1.kms);



printf("Enter the details of the driver No 2\n");
printf("Enter the name of second driver: \n");
scanf("%s",&d2.name);

printf("Enter the dlNo of second driver: \n");
scanf("%s",&d2.dlNo);

printf("Enter the route of second driver: \n");
scanf("%s",&d2.route);

printf("Enter the number of kms of second driver: \n");
scanf("%d",&d2.kms);



printf("Enter the details of the driver No 3\n");
printf("Enter the name of third driver: \n");
scanf("%s",&d3.name);

printf("Enter the dlNo of third driver: \n");
scanf("%s",&d3.dlNo);

printf("Enter the route of third driver: \n");
scanf("%s",&d3.route);

printf("Enter the number of kms of third driver: \n");
scanf("%d",&d3.kms);



printf("****Printing information of these drivers****:\n");

printf("For driver No 1 Name is: %s\n",d1.name);
printf("dlNo is: %s\n",d1.dlNo);
printf("route is: %s\n",d1.route);
printf("kms is: %d\n",d1.kms);



printf("For driver No 2 Name is: %s\n",d2.name);
printf("dlNo is: %s\n",d2.dlNo);
printf("route is: %s\n",d2.route);
printf("kms is: %d\n",d2.kms);



printf("For driver No 3 Name is: %s\n",d3.name);
printf("dlNo is: %s\n",d3.dlNo);
printf("route is: %s\n",d3.route);
printf("kms is: %d\n",d3.kms);
}