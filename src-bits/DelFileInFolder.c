#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main() {
    DIR *dir;
    char *path = getenv("temp");

    // Open the directory
    dir = opendir(path);

    // Check if the directory was opened successfully
    if (dir == NULL) {
        perror("Error opening directory");
        return 1;
    }

    // Read entries from the directory
    struct dirent *entry;

    // Check if there are any entries in the directory
    while ((entry = readdir(dir)) != NULL) {
    if (strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0) {
        printf("%s\n", entry->d_name);
    }

    if (unlink("C:\\Users\\-_-\\AppData\\Local\\Temp\\thisis.txt") == 0)
        printf("\n\n\n\tdone!");
}


    // Close the directory
    closedir(dir);

    return 0;
}
