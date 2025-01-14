#include <stdio.h>
#include <unistd.h>

void animateCursor() {
    int i;
    for (i = 0; i < 1; ++i) {
        printf("\rType: [     ]");
        fflush(stdout);
        usleep(500000); // Sleep for 0.5 seconds
        printf("\rType: [-    ]");
        fflush(stdout);
        usleep(500000);
        printf("\rType: [--   ]");
        fflush(stdout);
        usleep(500000);
        printf("\rType: [---  ]");
        fflush(stdout);
        usleep(500000);
        printf("\rType: [---- ]");
        fflush(stdout);
        usleep(500000);
        printf("\rType: [-----]");
        fflush(stdout);
        usleep(500000);
    }
    printf("\rType:              "); // Clear the animation
    fflush(stdout);
}

int main() {
    animateCursor();        // Call the animation function
    char name[35] = "Made by Mitesh Harishchandraji Soni";
    printf("%s\n", name);
    // Rest of your code...

    return 0;
}
