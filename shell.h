#ifndef AMIGO_SHELL_H
#define AMIGO_SHELL_H

// Amigo Libraries for Amigo Shell
#include <stdio.h>
#include <stdlib.h>


// Amigo's func
void repl_loop(void);
char* read_line(void);
char** tokenize_line(char* line);
int execute_args(char** args);

#endif