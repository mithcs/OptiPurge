#include <stdio.h>
#include <unistd.h>

// Function to display text animation
void textAnimation(const char *text) {
    for (int i = 0; text[i] != '\0'; i++) {
        putchar(text[i]);
        fflush(stdout);
        usleep(100000);   // Adjust the delay as needed
    }
}

// Function for other tasks
void performOtherTasks() {
    printf("\nOther tasks are being performed...\n");
    // Perform other tasks here
}

int main() {
    char message[] = "Hello, Text Animation!";

    // Initialize animation state
    int animationIndex = 0;
    int animationComplete = 0;

    // Main loop
    while (!animationComplete) {
        // Update animation
        if (message[animationIndex] != '\0') {
            putchar(message[animationIndex]);
            fflush(stdout);
            animationIndex++;
        } else {
            animationComplete = 1;
        }

        // Update other tasks
        performOtherTasks();

        // Adjust the delay as needed
        usleep(50000);   // Lower delay for smoother animation, but adjust as needed
    }

    return 0;
}
