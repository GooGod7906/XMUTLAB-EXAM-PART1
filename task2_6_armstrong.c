#include <stdio.h>

/* Integer power avoids requiring a separate math library at link time. */
long long intPower(int base, int exponent)
{
    long long result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

/* Return the number of decimal digits; zero has one digit. */
int digitCount(long long value)
{
    int digits = 1;
    while (value >= 10) {
        value /= 10;
        ++digits;
    }
    return digits;
}

/* Thought: Count digits, add each digit to the required power, and compare the sum with n. */
int main(void)
{
    long long number;
    long long remaining;
    long long sum = 0;
    int digits;

    printf("Enter a non-negative integer: ");
    if (scanf("%lld", &number) != 1 || number < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    digits = digitCount(number);
    remaining = number;
    do {
        int digit = (int)(remaining % 10);
        sum += intPower(digit, digits);
        remaining /= 10;
    } while (remaining > 0);

    if (sum == number) {
        printf("%lld is an Armstrong number.\n", number);
    } else {
        printf("%lld is not an Armstrong number.\n", number);
    }
    return 0;
}
