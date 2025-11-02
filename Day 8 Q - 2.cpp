#include <stdio.h>

int main() {
    int num, lastDigit, nextDigit;
    int flag = 1; // Assume ascending
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 9) {
        lastDigit = num % 10;
        num = num / 10;
        nextDigit = num % 10;

        if(nextDigit > lastDigit) {
            flag = 0; // Not ascending
            break;
        }
    }

    if(flag == 1)
        printf("Digits are in ascending order\n");
    else
        printf("Digits are NOT in ascending order\n");

    return 0;
}