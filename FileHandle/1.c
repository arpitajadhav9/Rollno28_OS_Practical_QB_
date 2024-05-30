#include <stdio.h>
#include <sys/stat.h>

int main() {
    char *filename = "example.txt";
    mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH; // Read and write for owner and group, read-only for others

    if (chmod(filename, mode) == 0) {
        printf("File permissions set successfully.\n");
    } else {
        perror("Error in setting file permissions");
        return 1;
    }

    return 0;
}
