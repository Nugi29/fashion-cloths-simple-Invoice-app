#include <stdio.h>
#include <string.h>

int main(void) {
    printf("     _____                      _     ______        _     _             \n");
    printf("    / ____|                    | |   |  ____|      | |   (_)             \n");
    printf("   | (___  _ __ ___   __ _ _ __| |_  | |__ __ _ ___| |__  _  ___  _ __   \n");
    printf("    \\___ \\| '_ ` _ \\ / _` | '__| __| |  __/ _` / __| '_ \\| |/ _ \\| '_ \\  \n");
    printf("    ____) | | | | | | (_| | |  | |_  | | | (_| \\__ \\ | | | | (_) | | | | \n");
    printf("   |_____/|_| |_| |_|\\__,_|_|   \\__| |_|  \\__,_|___/_| |_|_|\\___/|_| |_| \n\n");

    char date[50];
    char customerName[100];

    printf("Date: ");
    fgets(date, sizeof(date), stdin);
    date[strcspn(date, "\n")] = 0; // Remove newline

    printf("Customer Name: ");
    fgets(customerName, sizeof(customerName), stdin);
    customerName[strcspn(customerName, "\n")] = 0; // Remove newline

    printf("\n===========================================================================\n\n");
}