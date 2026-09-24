#include <stdio.h>

/* Thought: Keep the current result and apply as many operators as the user requests. */
int main(void)
{
    double result;
    char operator;

    printf("Enter the first number: ");
    if (scanf("%lf", &result) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    while (1) {
        double operand;

        printf("Enter operator (+, -, *, /), or q to quit: ");
        scanf(" %c", &operator);
        if (operator == 'q' || operator == 'Q') {
            break;
        }
        if (operator != '+' && operator != '-' && operator != '*' && operator != '/') {
            printf("Unsupported operator.\n");
            continue;
        }

        printf("Enter the next number: ");
        if (scanf("%lf", &operand) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
        if (operator == '/' && operand == 0.0) {
            printf("Cannot divide by zero. Try another operation.\n");
            continue;
        }

        switch (operator) {
        case '+':
            result += operand;
            break;
        case '-':
            result -= operand;
            break;
        case '*':
            result *= operand;
            break;
        case '/':
            result /= operand;
            break;
        }
        printf("Current result: %.2f\n", result);
    }

    printf("Final result: %.2f\n", result);
    return 0;
}
