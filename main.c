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


    printf("  _______     _____ _     _      _       \n");
    printf(" |__   __|   / ____| |   (_)    | |      \n");
    printf("    | |_____| (___ | |__  _ _ __| |_ ___ \n");
    printf("    | |______\\___ \\| '_ \\| | '__| __/ __|\n");
    printf("    | |      ____) | | | | | |  | |_\\__ \\\n");
    printf("    |_|     |_____/|_| |_|_|_|   \\__|___/\n");
    printf("\n");

    int tQTY;
    double tShirtUPrice, tShirtDiscount;

    printf("Number of T-Shirts: ");
    scanf("%d", &tQTY);

    printf("Unit Price of T-Shirt: ");
    scanf("%lf", &tShirtUPrice);

    printf("Discount Rate (%%): ");
    scanf("%lf", &tShirtDiscount);

    double tDis = tShirtUPrice * tQTY * tShirtDiscount / 100.0;
    double tAmount = (tShirtUPrice * tQTY) - tDis;

    printf("\n+---------------------+-----------+-----------------+-----------------+\n");
    printf("|  Description        |    QTY    |   Unit Price    |      Amount     |\n");
    printf("+---------------------+-----------+-----------------+-----------------+\n");
    printf("|   T-Shirts          |%10d |%16.2f |%16.2f |\n", tQTY, tShirtUPrice, tAmount);
    printf("+---------------------+-----------+-----------------+-----------------+\n");

    printf("\n===========================================================================\n\n");
}