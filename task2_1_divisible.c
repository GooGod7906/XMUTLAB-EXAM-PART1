#include <stdio.h>

/* Thought: Traverse 1 to n, test divisibility by 3 or 5, and count matches. */
int main(void)
{
    int n;
    int count = 0;

    printf("Enter a positive integer no greater than 1000: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Numbers divisible by 3 or 5: ");
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            printf("%d ", i);
            ++count;
        }
    }
    printf("\nCount: %d\n", count);
    return 0;
}
