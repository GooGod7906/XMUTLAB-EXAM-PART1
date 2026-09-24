#include <stdio.h>

/* Read a yes/no answer used by the repeat loop. */
int shouldRepeat(void)
{
    char answer;
    printf("Run again? (y/n): ");
    scanf(" %c", &answer);
    return answer == 'y' || answer == 'Y';
}

/* Thought: Read a group of scores, update four statistics during one traversal, and repeat on request. */
int main(void)
{
    int count;

    do {
        double score;
        double sum = 0.0;
        double highest = 0.0;
        double lowest = 0.0;
        int pass_count = 0;

        printf("Enter the number of students (1-100): ");
        if (scanf("%d", &count) != 1 || count < 1 || count > 100) {
            printf("Invalid student count.\n");
            return 1;
        }

        for (int i = 0; i < count; ++i) {
            printf("Score %d (0-100): ", i + 1);
            if (scanf("%lf", &score) != 1 || score < 0.0 || score > 100.0) {
                printf("Invalid score.\n");
                return 1;
            }
            if (i == 0 || score > highest) {
                highest = score;
            }
            if (i == 0 || score < lowest) {
                lowest = score;
            }
            sum += score;
            if (score >= 60.0) {
                ++pass_count;
            }
        }

        printf("Average: %.2f\n", sum / count);
        printf("Highest: %.2f\n", highest);
        printf("Lowest: %.2f\n", lowest);
        printf("Pass count: %d\n", pass_count);
    } while (shouldRepeat());

    printf("Program finished.\n");
    return 0;
}
