#include <stdio.h>
#include <string.h>

int main() {
    char tempName[100], tempDob[100];
    char name[20], dob[15];

    while (1) {
        printf("Enter patient name: ");
        fgets(tempName, sizeof(tempName), stdin);
        tempName[strcspn(tempName, "\n")] = '\0';

        printf("Enter date of birth (YYYY-MM-DD): ");
        fgets(tempDob, sizeof(tempDob), stdin);
        tempDob[strcspn(tempDob, "\n")] = '\0';

        if (strlen(tempName) >= sizeof(name) || strlen(tempDob) >= sizeof(dob)) {
            printf("Error: Input exceeds buffer size.\n");
        } else {
            strncpy(name, tempName, sizeof(name) - 1);
            name[sizeof(name) - 1] = '\0';

            strncpy(dob, tempDob, sizeof(dob) - 1);
            dob[sizeof(dob) - 1] = '\0';

            printf("Data saved successfully.\n");
            break;
        }
    }

    return 0;
}

