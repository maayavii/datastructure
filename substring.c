#include <stdio.h>
#include <string.h>

int main() {
    char str1[50];
    int start, length;

    // Input the main string
    printf("Enter the main string: ");
    scanf("%s", str1);

    // Input the starting index and length for the substring
    printf("Enter the starting index of substring: ");
    scanf("%d", &start);

    printf("Enter the length of substring: ");
    scanf("%d", &length);

    // Validate the start and length
    if (start < 0 || start >= strlen(str1) || length <= 0) {
        printf("Invalid start index or length\n");
        return 1;  // Exit with an error code
    }

    // Print the substring
    printf("Substring: ");
    for (int i = start; i < start + length && str1[i] != '\0'; i++) {
        printf("%c", str1[i]);
    }
    printf("\n");

    return 0;
}

