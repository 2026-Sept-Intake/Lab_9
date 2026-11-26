#include <stdio.h>
#include <string.h>

int main() {
    char greeting[50], body[200], closing[50];
    char email[300] = "";

    printf("Enter greeting: ");
    fgets(greeting, sizeof(greeting), stdin);
    greeting[strcspn(greeting, "\n")] = '\0';

    printf("Enter body: ");
    fgets(body, sizeof(body), stdin);
    body[strcspn(body, "\n")] = '\0';

    printf("Enter closing: ");
    fgets(closing, sizeof(closing), stdin);
    closing[strcspn(closing, "\n")] = '\0';

    strncat(email, greeting, sizeof(email) - strlen(email) - 1);
    strncat(email, " ", sizeof(email) - strlen(email) - 1);
    strncat(email, body, sizeof(email) - strlen(email) - 1);
    strncat(email, " ", sizeof(email) - strlen(email) - 1);
    strncat(email, closing, sizeof(email) - strlen(email) - 1);

    printf("%s\n", email);

    return 0;
}

