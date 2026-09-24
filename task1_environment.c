#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

/* Replace these two values with your own information before running. */
#define STUDENT_NAME "YOUR_NAME"
#define STUDENT_ID "YOUR_STUDENT_ID"

/* Thought: Store personal information in constants and print it to the screen. */
int main(void)
{
#ifdef _WIN32
    /* Make UTF-8 strings display correctly in a Windows console. */
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif

    printf("Name: %s\n", STUDENT_NAME);
    printf("Student ID: %s\n", STUDENT_ID);
    return 0;
}

