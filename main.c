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

    printf("  _______                                \n");
    printf(" |__   __|                               \n");
    printf("    | |_ __ ___  _   _ ___  ___ _ __ ___ \n");
    printf("    | | '__/ _ \\| | | / __|/ _ \\ '__/ __|\n");
    printf("    | | | | (_) | |_| \\__ \\  __/ |  \\__ \\\n");
    printf("    |_|_|  \\___/ \\__,_|___/\\___|_|  |___/\n");
    printf("\n");

    int troQTY;
    double troUPrice, troDiscount;

    printf("Number of Trousers: ");
    scanf("%d", &troQTY);

    printf("Unit Price of Trouser: ");
    scanf("%lf", &troUPrice);

    printf("Discount Rate (%%): ");
    scanf("%lf", &troDiscount);

    double troDis = troUPrice * troQTY * troDiscount / 100.0;
    double troAmount = (troUPrice * troQTY) - troDis;

    printf("\n+---------------------+-----------+-----------------+-----------------+\n");
    printf("|  Description        |    QTY    |   Unit Price    |      Amount     |\n");
    printf("+---------------------+-----------+-----------------+-----------------+\n");
    printf("|  Trousers           |%10d |%16.2f |%16.2f |\n", troQTY, troUPrice, troAmount);
    printf("+---------------------+-----------+-----------------+-----------------+\n");

    printf("\n===========================================================================\n\n");

    printf("   _____ _     _      _       \n");
    printf("  / ____| |   (_)    | |      \n");
    printf(" | (___ | |__  _ _ __| |_ ___ \n");
    printf("  \\___ \\| '_ \\| | '__| __/ __|\n");
    printf("  ____) | | | | | |  | |_\\__ \\\n");
    printf(" |_____/|_| |_|_|_|   \\__|___/\n");
    printf("\n");

    int sQTY;
    double sUPrice, sDiscount;

    printf("Number of Shirts: ");
    scanf("%d", &sQTY);

    printf("Unit Price of Shirt: ");
    scanf("%lf", &sUPrice);

    printf("Discount Rate (%%): ");
    scanf("%lf", &sDiscount);

    double sDis = sUPrice * sQTY * sDiscount / 100.0;
    double sAmount = (sUPrice * sQTY) - sDis;

    printf("\n+---------------------+-----------+-----------------+-----------------+\n");
    printf("|  Description        |    QTY    |   Unit Price    |      Amount     |\n");
    printf("+---------------------+-----------+-----------------+-----------------+\n");
    printf("|  Shirts             |%10d |%16.2f |%16.2f |\n", sQTY, sUPrice, sAmount);
    printf("+---------------------+-----------+-----------------+-----------------+\n");

    printf("\n===========================================================================\n\n");

    printf("   _____ _                _       \n");
    printf("  / ____| |              | |      \n");
    printf(" | (___ | |__   ___  _ __| |_ ___ \n");
    printf("  \\___ \\| '_ \\ / _ \\| '__| __/ __|\n");
    printf("  ____) | | | | (_) | |  | |_\\__ \\\n");
    printf(" |_____/|_| |_|\\___/|_|   \\__|___/\n");
    printf("\n");

    int shoQTY;
    double shoUPrice, shoDiscount;

    printf("Number of Shorts: ");
    scanf("%d", &shoQTY);

    printf("Unit Price of Short: ");
    scanf("%lf", &shoUPrice);

    printf("Discount Rate (%%): ");
    scanf("%lf", &shoDiscount);

    double shoDis = shoUPrice * shoQTY * shoDiscount / 100.0;
    double shoAmount = (shoUPrice * shoQTY) - shoDis;

    printf("\n+---------------------+-----------+-----------------+-----------------+\n");
    printf("|  Description        |    QTY    |   Unit Price    |      Amount     |\n");
    printf("+---------------------+-----------+-----------------+-----------------+\n");
    printf("|   Shorts            |%10d |%16.2f |%16.2f |\n", shoQTY, shoUPrice, shoAmount);
    printf("+---------------------+-----------+-----------------+-----------------+\n");

    printf("\n===========================================================================\n\n");

    double total = tAmount + troAmount + sAmount + shoAmount;

    printf("+---------------------------------------------------------------------+\n");
    printf("|             ___ _ _ _   ___                                        |\n");
    printf("|            | _ |_) | | / __|_  _ _ __  _ __  __ _ _ _ _  _          |\n");
    printf("|            | _ \\ | | | \\__ \\ || | '  \\| '  \\/ _` | '_| || |         |\n");
    printf("|            |___/_|_|_| |___/\\_,_|_|_|_|_|_|_\\__,_|_|  \\_, |         |\n");
    printf("|                                                       |__/          |\n");
    printf("|                                                                     |\n");
    printf("|   Customer: %-20s                  Date: %-11s |\n", customerName, date);
    printf("|                                                                     |\n");
    printf("+---------------------+-----------+-----------------+-----------------+\n");
    printf("|  Description        |    QTY    |   Unit Price    |      Amount     |\n");
    printf("+---------------------+-----------+-----------------+-----------------+\n");
    printf("|                     |           |                 |                 |\n");
    printf("|   T-Shirts          |%10d |%16.2f |%16.2f |\n", tQTY, tShirtUPrice, tAmount);
    printf("|                     |           |                 |                 |\n");
    printf("|  Trousers           |%10d |%16.2f |%16.2f |\n", troQTY, troUPrice, troAmount);
    printf("|                     |           |                 |                 |\n");
    printf("|  Shirts             |%10d |%16.2f |%16.2f |\n", sQTY, sUPrice, sAmount);
    printf("|                     |           |                 |                 |\n");
    printf("|   Shorts            |%10d |%16.2f |%16.2f |\n", shoQTY, shoUPrice, shoAmount);
    printf("|                     |           |                 |                 |\n");
    printf("+---------------------+-----------+-----------------+-----------------+\n");
    printf("|   Total                                           |%16.2f |\n", total);
    printf("+---------------------------------------------------+-----------------+\n");

    return 0;
}
