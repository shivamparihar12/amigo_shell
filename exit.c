#include "shell.h"

int Exit(char** args)
{
    if (args[1])
        return (atoi(args[1]));
    else
        return (0);

}