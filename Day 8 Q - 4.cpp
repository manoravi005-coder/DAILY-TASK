#include <stdio.h>

int main() {
    int num, digit;
    int count = 0;
    int sum = 0;
    int product = 1;
    int temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; // Store original number

    while(temp > 0) {
        digit = temp % 10;
        count++;
        sum += digit;
        product *= digit;
        temp /= 10;
    }

    printf("Count of digits = %d\n", count);
    printf("Sum of digits   = %d\n", sum);
    printf("Product of digits = %d\n", product);

    return 0;
}