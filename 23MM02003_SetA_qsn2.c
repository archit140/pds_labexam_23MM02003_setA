#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0, i, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        fact = 1;
        for (i = 1; i <= remainder; i++) {
            fact *= i;
        }
        result += fact;
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is a strong number.\n", num);
    else
        printf("%d is not a strong number.\n", num);

    return 0;
}
