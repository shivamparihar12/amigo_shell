#include <shell.h>

int execute_args(char** args) {
    char* builtinFuncList[] = {
        "cd",
        "env",
        "help",
        "exit"
    };

    int (*builtinFunc[])(char**) = {
        &cd,
        &env,
        &help,
        &exit
    };

    int pos = 0;

    if (args[0] == NULL) {
        return -1;
    }

    for (pos = 0; pos < sizeof(builtinFuncList) / sizeof(char*); pos++)
    {
        if (strcmp(builtinFuncList[pos], args[0]) == 0)
        {
            return (*builtinFuncList[pos])(args);
        }

    }

    return new_process(args);

}