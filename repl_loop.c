#include "shell.h"

void repl_loop(void) {
    char* line, ** args;
    int amigo_status = -1;

    do
    {
        printf("amigo_shell:)");
        line = read_line();
        args = tokenize_line(line);
        amigo_status = execute_args(args);

        // free amigo from his tension or "memory leak"
        free(line);
        free(args);
    } while (amigo_status == -1);

}