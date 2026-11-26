#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    char name[50], account[50];

    printf("Enter account details (Name, Account Number): ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    sscanf(input, "%[^,], %s", name, account);

    printf("Name: %s, Account Number: %s\n", name, account);

    return 0;
}

