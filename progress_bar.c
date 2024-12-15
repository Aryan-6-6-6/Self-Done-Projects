#include <stdio.h>
#include <unistd.h> // For sleep()
#include <windows.h> // For screen clear command

#define MAX_CHAR 50

int main() {
    int i = 0, progress_1 = 0, progress_2 = 0, progress_3 = 0;
    int task = 1, task2 = 2, task3 = 3;
    char ch = '=';

    while (i < 25) {
        // Task 1
        printf("Task %d: [", task);
        for (int j = 0; j < progress_1; j++) {
            printf("%c", ch);  // Print the '=' character
        }
        for (int j = progress_1; j < MAX_CHAR; j++) {
            printf(" ");  // Fill the rest with spaces
        }
        printf("] %d%%\n", (progress_1 * 100) / MAX_CHAR);  // Display percentage
        progress_1 += 2; // Increase progress for Task 1

        // Task 2
        printf("Task %d: [", task2);
        for (int j = 0; j < progress_2; j++) {
            printf("%c", ch);  // Print the '=' character
        }
        for (int j = progress_2; j < MAX_CHAR; j++) {
            printf(" ");  // Fill the rest with spaces
        }
        printf("] %d%%\n", (progress_2 * 100) / MAX_CHAR);  // Display percentage
        progress_2 += 2; // Increase progress for Task 2

        // Task 3
        printf("Task %d: [", task3);
        for (int j = 0; j < progress_3; j++) {
            printf("%c", ch);  // Print the '=' character
        }
        for (int j = progress_3; j < MAX_CHAR; j++) {
            printf(" ");  // Fill the rest with spaces
        }
        printf("] %d%%\n", (progress_3 * 100) / MAX_CHAR);  // Display percentage
        progress_3 += 2; // Increase progress for Task 3

        sleep(1); // Sleep for 1 second after updating all tasks

        system("cls");  // Clear the screen after displaying all tasks
        i++; // Increment i to continue the loop
    }

    printf("Task Completed Successfully!!\n");
    return 0;
}
