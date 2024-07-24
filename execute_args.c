#include "shell.h"

int execute_args(char** args) {
    char* builtinFuncList[] = {
        "cd",
        "env",
        "own_help",
        "exit"
    };

    int (*builtinFunc[])(char**) = {
        &cd,
        &env,
        &own_help,
        &Exit
    };

    int pos = 0;

    if (args[0] == NULL) {
        return (-1);
    }

    for (; pos < sizeof(builtinFuncList) / sizeof(char*); pos++)
    {
        if (strcmp(builtinFuncList[pos], args[0]) == 0)
        {
            return (*builtinFunc[pos])(args);
        }

    }

    return new_process(args);

}