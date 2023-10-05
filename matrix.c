
             #include <stdio.h>

int main() {
    int a[20][20], b[20][20], result[20][20], r, c, i, j;
    printf("Enter the rows and columns for matrices: ");
    scanf("%d %d", &r, &c);

    printf("Enter the elements in the first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements in the second matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    int choice;
    for (;;) {
        printf("\n1: Matrix display\n");
        printf("2: Matrix addition\n");
        printf("3: Matrix subtraction\n");
        printf("4: Matrix transpose\n");
        printf("5: Exit the program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("\nMatrix A\n");
                for (i = 0; i < r; i++) {
                    for (j = 0; j < c; j++) {
                        printf("%-*d", 5, a[i][j]);  // Adjust the width as needed
                    }
                    printf("\n");
                }

                printf("\nMatrix B\n");
                for (i = 0; i < r; i++) {
                    for (j = 0; j < c; j++) {
                        printf("%-*d", 5, b[i][j]);  // Adjust the width as needed
                    }
                    printf("\n");
                }
                break;
            }

            case 2: {
                printf("\nThe addition\n");
                for (i = 0; i < r; i++) {
                    for (j = 0; j < c; j++) {
                        result[i][j] = a[i][j] + b[i][j];
                        printf("%-*d", 5, result[i][j]);  // Adjust the width as needed
                    }
                    printf("\n");
                }
                break;
            }

            case 3: {
                printf("\nThe subtraction\n");
                for (i = 0; i < r; i++) {
                    for (j = 0; j < c; j++) {
                        result[i][j] = a[i][j] - b[i][j];
                        printf("%-*d", 5, result[i][j]);  // Adjust the width as needed
                    }
                    printf("\n");
                }
                break;
            }

            case 4: {
                printf("\nTranspose\n");
                for (i = 0; i < c; ++i) {
                    for (j = 0; j < r; ++j) {
                        result[i][j] = a[j][i];
                        printf("%-*d", 5, result[i][j]);  // Adjust the width as needed
                    }
                    printf("\n");
                }
                break;
            }

            case 5:
                return 0;

            default: {
                printf("Choose between 1-5\n");
            }
        }
    }

    return 0;
}

