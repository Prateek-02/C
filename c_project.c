#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PROPERTIES 100

struct Property {
    int id;
    char name[50];
    char location[50];
    char type[50];
    int price;
    int status; // 0 for available, 1 for sold
};

struct Property properties[MAX_PROPERTIES];
int num_properties = 0;

void add_property() {
    if (num_properties >= MAX_PROPERTIES) {
        printf("Cannot add more properties.\n");
        return;
    }
    struct Property p;
    printf("Enter property details:\n");
    printf("ID: ");
    scanf("%d", &p.id);
    printf("Name: ");
    scanf("%s", p.name);
    printf("Location: ");
    scanf("%s", p.location);
    printf("Type: ");
    scanf("%s", p.type);
    printf("Price: ");
    scanf("%d", &p.price);
    p.status = 0; // property is available by default
    properties[num_properties++] = p;
    printf("Property added successfully.\n");
}

void display_properties() {
    printf("ID\tName\tLocation\tType\tPrice\tStatus\n");
    for (int i = 0; i < num_properties; i++) {
        printf("%d\t%s\t%s\t%s\t%d\t%s\n", properties[i].id, properties[i].name,
               properties[i].location, properties[i].type, properties[i].price,
               properties[i].status == 0 ? "Available" : "Sold");
    }
}

void search_properties() {
    char search_term[50];
    printf("Enter search term: ");
    scanf("%s", search_term);
    printf("ID\tName\tLocation\tType\tPrice\tStatus\n");
    for (int i = 0; i < num_properties; i++) {
        if (strstr(properties[i].name, search_term) || strstr(properties[i].location, search_term)
            || strstr(properties[i].type, search_term)) {
            printf("%d\t%s\t%s\t%s\t%d\t%s\n", properties[i].id, properties[i].name,
                   properties[i].location, properties[i].type, properties[i].price,
                   properties[i].status == 0 ? "Available" : "Sold");
        }
    }
}

void delete_property() {
    int id;
    printf("Enter ID of property to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < num_properties; i++) {
        if (properties[i].id == id) {
            // shift all properties after the deleted property one position to the left
            for (int j = i; j < num_properties - 1; j++) {
                properties[j] = properties[j+1];
            }
            num_properties--;
            printf("Property deleted successfully.\n");
            return;
        }
    }
    printf("Property not found.\n");
}

void buy_property() {
    int id;
    printf("Enter ID of property to buy: ");
    scanf("%d", &id);
    for (int i = 0; i < num_properties; i++) {
        if (properties[i].id == id && properties[i].status == 0) {
            properties[i].status = 1;
            printf("Property bought successfully.\n");
            return;
        }
    }
    printf("Property not found or already sold.\n");
}

void sell_property() {
    int id;
    printf("Enter ID of property to sell:");
    scanf("%d", &id);
for (int i = 0; i < num_properties; i++) {
if (properties[i].id == id && properties[i].status == 1) {
properties[i].status = 0;
printf("Property sold successfully.\n");
return;
}
}
printf("Property not found or already available.\n");
}

int main() {
int choice;
do {
printf("Real Estate Advisor\n");
printf("1. Add Property\n");
printf("2. Display Properties\n");
printf("3. Search Properties\n");
printf("4. Delete Property\n");
printf("5. Buy Property\n");
printf("6. Sell Property\n");
printf("7. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
    switch (choice) {
        case 1:
            add_property();
            break;
        case 2:
            display_properties();
            break;
        case 3:
            search_properties();
            break;
        case 4:
            delete_property();
            break;
        case 5:
            buy_property();
            break;
        case 6:
            sell_property();
            break;
        case 7:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }
} while (choice != 7);

return 0;
}
