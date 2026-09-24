#include <stdio.h>

/* Thought: Visit each element and append it to the odd or even result array. */
int main(void)
{
    int array[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int odd[9];
    int even[9];
    int odd_count = 0;
    int even_count = 0;

    for (int i = 0; i < 9; ++i) {
        if (array[i] % 2 != 0) {
            odd[odd_count++] = array[i];
        } else {
            even[even_count++] = array[i];
        }
    }

    printf("Odd array: ");
    for (int i = 0; i < odd_count; ++i) {
        printf("%d ", odd[i]);
    }
    printf("\nEven array: ");
    for (int i = 0; i < even_count; ++i) {
        printf("%d ", even[i]);
    }
    printf("\n");
    return 0;
}
