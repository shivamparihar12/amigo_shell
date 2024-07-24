#ifndef AMIGO_SHELL_H
#define AMIGO_SHELL_H
#define AMIGO_DELIMETERS " \t\a\r\n"

// Amigo Libraries for Amigo Shell
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

// Amigo's func
void repl_loop(void);
char* read_line(void);
char** tokenize_line(char* line);
int execute_args(char** args);
int new_process(char** args);
int cd(char** args);
int env(char** args);
int own_help(char** args);
int Exit(char** args);
#endif