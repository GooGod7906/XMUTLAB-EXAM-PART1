#include <stdio.h>

/* Thought: Record 10 numbers, subtract one maximum and one minimum, then divide by 8. */
int main(void)
{
    int value;
    int max_value = 0;
    int min_value = 0;
    long long sum = 0;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; ++i) {
        if (scanf("%d", &value) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
        if (i == 0 || value > max_value) {
            max_value = value;
        }
        if (i == 0 || value < min_value) {
            min_value = value;
        }
        sum += value;
    }

    printf("Average after removing one maximum and one minimum: %.2f\n",
           (sum - max_value - min_value) / 8.0);
    return 0;
}
