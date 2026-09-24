#include <stdio.h>

/* Return 1 for prime and 0 otherwise. */
int isPrime(int n)
{
    if (n < 2) {
        return 0;
    }
    for (int divisor = 2; divisor <= n / divisor; ++divisor) {
        if (n % divisor == 0) {
            return 0;
        }
    }
    return 1;
}

/* Thought: Test each number with isPrime and start a new line after five primes. */
int main(void)
{
    int printed = 0;

    printf("Primes from 1 to 100:\n");
    for (int number = 1; number <= 100; ++number) {
        if (isPrime(number)) {
            printf("%4d", number);
            ++printed;
            if (printed % 5 == 0) {
                putchar('\n');
            }
        }
    }
    if (printed % 5 != 0) {
        putchar('\n');
    }
    return 0;
}
