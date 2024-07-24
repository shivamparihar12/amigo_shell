#include "shell.h"

char* read_line(void) {
    char* buffer = NULL;
    size_t size = 0;

    size_t char_read = getline(&buffer, &size, stdin);

    if (char_read == -1)
    {
        if (feof(stdin)) {
            free(buffer);
            exit(EXIT_SUCCESS); // as EOF reached
        }
        else {
            free(buffer);
            perror("Error occured while reading line :(");
            exit(EXIT_FAILURE);
        }
    }

    return buffer;

}