#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowerStr(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char catalog[3][50] = {"Camera", "Camp Stove", "Candle"};
    char search[50];
    int firstMatch = 1;

    printf("Enter the substring: ");
    fgets(search, sizeof(search), stdin);
    search[strcspn(search, "\n")] = '\0';
    toLowerStr(search);

    printf("Products found: ");

    for (int i = 0; i < 3; i++) {
        char lowerItem[50];
        strcpy(lowerItem, catalog[i]);
        toLowerStr(lowerItem);

        if (strstr(lowerItem, search) != NULL) {
            if (!firstMatch) {
                printf(", ");
            }
            printf("%s", catalog[i]);
            firstMatch = 0;
        }
    }
    printf("\n");

    return 0;
}

