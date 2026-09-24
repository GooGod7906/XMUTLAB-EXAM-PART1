#include <stdio.h>

typedef struct {
    char id[20];
    char name[50];
    double score;
} Student;

/* Thought: Store three students in structures, find the largest score, and print that student. */
int main(void)
{
    Student students[3];
    int best_index = 0;

    printf("Enter each student's ID, name (no spaces), and score:\n");
    for (int i = 0; i < 3; ++i) {
        printf("Student %d: ", i + 1);
        if (scanf("%19s %49s %lf", students[i].id, students[i].name,
                  &students[i].score) != 3) {
            printf("Invalid input.\n");
            return 1;
        }
        if (students[i].score < 0.0 || students[i].score > 100.0) {
            printf("Score must be between 0 and 100.\n");
            return 1;
        }
        if (students[i].score > students[best_index].score) {
            best_index = i;
        }
    }

    printf("Highest-scoring student: %s\n", students[best_index].name);
    printf("Score: %.2f\n", students[best_index].score);
    return 0;
}
