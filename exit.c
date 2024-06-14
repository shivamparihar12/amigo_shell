#include "shell.h"

int exit(char** args)
{
    if (args[1])
        return (atoi(args[1]));
    else
        return (0);

}