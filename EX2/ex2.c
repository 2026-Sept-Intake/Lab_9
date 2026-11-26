#include <stdio.h>
#include <string.h>

int main() {
    char receipt[100];
    char orderID[6];
    printf("Enter the reciept details: ");
    fgets(receipt, sizeof(receipt), stdin);

    strncpy(orderID, receipt + 10, 5);
    orderID[5] = '\0';

    printf("Order ID: %s\n", orderID);
    return 0;
}

