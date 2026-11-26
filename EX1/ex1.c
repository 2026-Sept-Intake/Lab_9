#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char first[50], last[50] = "N/A";
    char line[100];
   
   printf("Enter the name: ");
   fgets(line, sizeof(line), stdin);

   sscanf(line, "%s %s", first, last);

    first[0] = toupper(first[0]);
    for (int i = 1; first[i] != '\0'; i++) {
        first[i] = tolower(first[i]);
    }

 
    if (strcmp(last, "N/A") != 0) {
        last[0] = toupper(last[0]);
        for (int i = 1; last[i] != '\0'; i++) {
            last[i] = tolower(last[i]);
        }
    }

    printf("%s %s\n", first, last);
    return 0;
}

