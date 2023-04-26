#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for holding property information
struct Property
{
    int id;
    char address[100];
    char type[20];
    int price;
};

// function Prototypes
void add_property();
void delete_property();
void update_property();
void buy_property();
void sell_property();

int main()
{
    int choice;
    printf("Welcome to Real Estate Advisor!\n");
    printf("1. Add Property\n");
    printf("2. Delete Property\n");
    printf("3. Update Property\n");
    printf("4. Buy Property\n");
    printf("5. Sell Property\n");
    printf("6. Quit\n");

    do
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add_property();
            break;
        case 2:
            delete_property();
            break;
        case 3:
            update_property();
            break;
        case 4:
            buy_property();
            break;
        case 5:
            sell_property();
            break;
        case 6:
            printf("Thank you for using Real Estate Advisor!\n");
            break;
        default:
            printf("Invalid choice, please try again.\n");
        }
    } while (choice != 6);

    return 0;
}

// Adding Property

void add_property()
{
    FILE *fp;
    struct Property p;
    fp = fopen("properties.txt", "a");
    printf("Enter property ID: ");
    scanf("%d", &p.id);
    printf("Enter property address: ");
    scanf("%s", p.address);
    printf("Enter property type: ");
    scanf("%s", p.type);
    printf("Enter property price: ");
    scanf("%d", &p.price);
    fprintf(fp, "%d %s %s %d\n", p.id, p.address, p.type, p.price);
    fclose(fp);
}

// Deleting Property

void delete_property()
{
    FILE *fp, *temp;
    int id;
    struct Property p;
    fp = fopen("properties.txt", "r");
    temp = fopen("temp.txt", "w");
    printf("Enter ID of property to delete: ");
    scanf("%d", &id);
    while (fscanf(fp, "%d %s %s %d", &p.id, p.address, p.type, &p.price) != EOF)
    {
        if (p.id != id)
        {
            fprintf(temp, "%d %s %s %d\n", p.id, p.address, p.type, p.price);
        }
    }
    fclose(fp);
    fclose(temp);
    remove("properties.txt");
    rename("temp.txt", "properties.txt");
}

// Updating Property

void update_property()
{
    FILE *fp, *temp;
    int id, found = 0;
    struct Property p;
    fp = fopen("properties.txt", "r");
    temp = fopen("temp.txt", "w");
    printf("Enter ID of property to update: ");
    scanf("%d", &id);
    while (fscanf(fp, "%d %s %s %d", &p.id, p.address, p.type, &p.price) != EOF)
    {
        if (p.id == id)
        {
            found = 1;
            printf("Enter new address: ");
            scanf("%s", p.address);
            printf("Enter new type: ");
            scanf("%s", p.type);
            printf("Enter new price: ");
            scanf("%d", &p.price);
        }
        fprintf(temp, "%d %s %s %d\n", p.id, p.address, p.type, p.price);
    }
    fclose(fp);
    fclose(temp);
    remove("properties.txt");
    rename("temp.txt", "properties.txt");
    if (!found)
    {
        printf("Property not found.\n");
    }
    else
    {
        printf("Property updated.\n");
    }
}

// Buying Property

void buy_property()
{
    FILE *fp, *temp;
    int id, found = 0;
    struct Property p;
    fp = fopen("properties.txt", "r");
    temp = fopen("temp.txt", "w");
    printf("Enter ID of property to buy: ");
    scanf("%d", &id);
    while (fscanf(fp, "%d %s %s %d", &p.id, p.address, p.type, &p.price) != EOF)
    {
        if (p.id == id)
        {
            found = 1;
            printf("Property bought:\n");
            printf("Address: %s\n", p.address);
            printf("Type: %s\n", p.type);
            printf("Price: %d\n", p.price);
        }
        else
        {
            fprintf(temp, "%d %s %s %d\n", p.id, p.address, p.type, p.price);
        }
    }
    fclose(fp);
    fclose(temp);
    remove("properties.txt");
    rename("temp.txt", "properties.txt");
    if (!found)
    {
        printf("Property not found.\n");
    }
}

// Selling Property

void sell_property()
{
    FILE *fp, *temp;
    int id, found = 0;
    struct Property p;
    fp = fopen("properties.txt", "r");
    temp = fopen("temp.txt", "w");
    printf("Enter ID of property to sell: ");
    scanf("%d", &id);
    while (fscanf(fp, "%d %s %s %d", &p.id, p.address, p.type, &p.price) != EOF)
    {
        if (p.id == id)
        {
            found = 1;
            printf("Property sold:\n");
            printf("Address: %s\n", p.address);
            printf("Type: %s\n", p.type);
            printf("Price: %d\n", p.price);
        }
        else
        {
            fprintf(temp, "%d %s %s %d\n", p.id, p.address, p.type, p.price);
        }
    }
    fclose(fp);
    fclose(temp);
    remove("properties.txt");
    rename("temp.txt", "properties.txt");
    if (!found)
    {
        printf("Property not found.\n");
    }
}
