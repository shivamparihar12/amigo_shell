#include "shell.h"

int own_help(char** args)
{
    char* builtinFuncList[] = {
        "cd",
        "env",
        "help",
        "exit"
    };
    int i = 0;
    (void)(**args);

    printf("\n---amigo on help---\n");
    printf("amigo you gotta type a command and its arguments, then hit enter\n");
    printf("amigo's Built-in commands are:\n");
    for (; i < sizeof(builtinFuncList) / sizeof(char*); i++)
    {
        printf("  -> %s\n", builtinFuncList[i]);
    }
    printf("Use the man command for information on other programs. Here i take my leave amigo. Heed me if you need me, Ciao.\n\n");
    return (-1);
}