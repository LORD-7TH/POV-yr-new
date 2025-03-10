#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100 // Maximum number of items

int main() {
    char items[MAX_ITEMS][50]; // Array to store item names
    float prices[MAX_ITEMS];   // Array to store item prices
    int count = 0;             // Counter for the number of items
    float total = 0;           // Total sum of prices
    char choice;

    printf("Welcome to the Grocery List Program!\n");

    do {
        // Get item name
        printf("Enter the name of the grocery item: ");
        scanf(" %[^\n]", items[count]); // Read a string with spaces

        // Get item price
        printf("Enter the price of %s: ", items[count]);
        scanf("%f", &prices[count]);

        // Add price to total
        total += prices[count];
        count++;

        // Ask if the user wants to add more items
        printf("Do you want to add another item? (y/n): ");
        scanf(" %c", &choice);

    } while ((choice == 'y' || choice == 'Y') && count < MAX_ITEMS);

    // Display the grocery list
    printf("\nHere is your grocery list:\n");
    printf("----------------------------------\n");
    printf("Item\t\tPrice\n");
    printf("----------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%-15s $%.2f\n", items[i], prices[i]); // Align item names and prices
    }
    printf("----------------------------------\n");
    printf("Total:\t\t$%.2f\n", total);

    printf("\nThank you for using the Grocery List Program!\n");

    return 0;
}