#ifndef AMIGO_SHELL_H
#define AMIGO_SHELL_H
#define DELIMETERS " \t\a\r\n"

// Amigo Libraries for Amigo Shell
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Amigo's func
void repl_loop(void);
char* read_line(void);
char** tokenize_line(char* line);
int execute_args(char** args);
#endif