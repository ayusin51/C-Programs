#include<stdio.h>
#include<math.h>
int main() {
         int num, c = 0, result;
         printf("Enter the number : ");
         scanf("%d", &num);
         result = convertToOctal(num, c);
         printDecimal(result);
         return 0;
}

int convertToOctal(int num, int c) {
            int rem, octalNum = 0, i = 0;
            while(num) {
            rem = num % 8;
            num = num / 8;
            octalNum = octalNum + rem * pow(10, i);
            i++;
            }
            printf("octal number : %d", octalNum);
            return octalNum;
}

void printDecimal(int result) {
            int r, j = 0, decimalNum = 0;
            while(result)
            {
            r = result % 10;
            result /= 10;
            decimalNum = decimalNum + r* pow(8, j);
            j++;
            }
            printf("\ndecimal number = %d", decimalNum);
}
