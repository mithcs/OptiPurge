#include <stdio.h>

int main() {
    FILE *filePointer;

    // Open a file for writing. If the file doesn't exist, it will be created.
    // "w" stands for write mode. If the file already exists, it will be truncated.
    filePointer = fopen("example.txt", "w");

    if (filePointer == NULL) {
        // File opening failed
        printf("Error opening file.\n");
        return 1;
    }

    // File opened successfully, you can now write to it or perform other operations.

    // Example: Writing a string to the file
    fprintf(filePointer, "Hello, this is a new file!\n");

    // Close the file when you are done with it
    fclose(filePointer);

    return 0;
}
