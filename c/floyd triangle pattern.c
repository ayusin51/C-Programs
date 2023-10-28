#include <stdio.h>

int main() {
    int c = 1;

    for (int row = 0; row < 7; row++) {
        for (int col = 0; col < row + 1; col++) {
            printf("%d ", c);
            c++;
        }
        printf("\n");
    }

    return 0;
}
