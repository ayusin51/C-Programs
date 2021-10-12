#include <stdio.h>
int main() {
    int num, count = 0;
    printf("Enter a number : ");
    scanf("%d", &num);

    while(num != 0)
    {
        num = num / 10;
        count++;
    }
    printf("The number of digits in the entered number are ", count);
    return 0;
}
