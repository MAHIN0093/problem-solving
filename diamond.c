#include <stdio.h>

int main() {
    int n, i, j, space;

    // Take input from user
    printf("Enter the number of rows for the diamond's half: ");
    scanf("%d", &n);

    // Upper part of the diamond
    for (i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars for the current row
        for (j = 1; j <= 2 * i - 1; j++) {
            printf(" * ");
        }
        // Move to the next row
        printf("\n");
    }

    // Lower part of the diamond
    for (i = n - 1; i >= 1; i--) {
        // Print spaces for alignment
        for (space = 1; space <= n - i; space++) {
            printf("  ");
        }
        // Print stars for the current row
        for (j = 1; j <= 2 * i - 1; j++) {
            printf( "* ");
        }
        // Move to the next row
        printf("\n");
    }

    return 0;
}
