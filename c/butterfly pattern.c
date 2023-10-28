#include <stdio.h>

int main() {
    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < row + 1; col++) {
            printf("* ");
        }
        for (int col = 0; col < 8 - 2 * row; col++) {
            printf("  ");
        }
        for (int col = 0; col < row + 1; col++) {
            printf("* ");
        }
        printf("\n");
    }

    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5 - row; col++) {
            printf("* ");
        }
        for (int col = 0; col < 2 * row; col++) {
            printf("  ");
        }
        for (int col = 0; col < 5 - row; col++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
