#include <stdio.h>

/* Exchange two values through their addresses. */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* Return the address of the largest element in arr. */
int *findMax(int *arr, int len)
{
    if (arr == NULL || len <= 0) {
        return NULL;
    }

    int *max_address = arr;
    for (int i = 1; i < len; ++i) {
        if (arr[i] > *max_address) {
            max_address = &arr[i];
        }
    }
    return max_address;
}

/* Thought: Demonstrate pointer-based exchange, then print the value and address of the maximum. */
int main(void)
{
    int first = 12;
    int second = 35;
    int numbers[] = {18, 7, 42, 15, 29};
    int length = (int)(sizeof(numbers) / sizeof(numbers[0]));
    int *max_address;

    printf("Before swap: first = %d, second = %d\n", first, second);
    swap(&first, &second);
    printf("After swap:  first = %d, second = %d\n", first, second);

    max_address = findMax(numbers, length);
    if (max_address != NULL) {
        printf("Maximum value = %d, address = %p\n",
               *max_address, (void *)max_address);
    }
    return 0;
}
