#include <stdio.h>
#include <string.h>

int main() {
    char mainString[100], subString[50], result[150];
    int choice, start, length;

    printf("Enter the main string: ");
    fgets(mainString, sizeof(mainString), stdin);
    mainString[strcspn(mainString, "\n")] = '\0';

    do {
        printf("\nMenu:\n");
        printf("1. Search\n");
        printf("2. Concatenation\n");
        printf("3. Substring\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the substring to search: ");
                scanf("%s", subString);
                if (strstr(mainString, subString) != NULL) {
                    printf("%s found in %s\n", subString, mainString);
                } else {
                    printf("%s not found in %s\n", subString, mainString);
                }
                break;

            case 2:
                printf("Enter the second string to concatenate: ");
                scanf("%s", subString);
                strcpy(result, mainString);
                strcat(result, subString);
                printf("Concatenated string: %s\n", result);
                break;

            case 3:
                printf("Enter the starting index of substring: ");
                scanf("%d", &start);

                printf("Enter the length of substring: ");
                scanf("%d", &length);

                if (start >= 0 && start < strlen(mainString) && length > 0) {
                    printf("Substring: ");
                    for (int i = start; i < start + length && mainString[i] != '\0'; i++) {
                        printf("%c", mainString[i]);
                    }
                    printf("\n");
                } else {
                    printf("Invalid start index or length\n");
                }
                break;

            case 4:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 4);

    return 0;
}

