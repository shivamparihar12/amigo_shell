#include <shell.h>

char** tokenize_line(char* buffer) {
    int pos = 0;
    int size = 64;
    char** words = malloc(size * sizeof(char*));
    char* word;

    if (!words) {
        fprintf(stderr, "error in allocating memory to $words in file tokenize_line");
        exit(EXIT_FAILURE);
    }

    word = strtok(buffer, DELIMETERS);

    while (word != NULL)
    {
        words[pos++] = word;
        if (pos >= size)
        {
            size += size;
            words = realloc(words, size * sizeof(char*));
            if (!words)
            {
                fprintf(stderr, "error in reallocating memory to $words in file tokennize_line");
            }
        }
        word = strtok(NULL, DELIMETERS);
    }

    words[pos] = NULL;
    return words;


}