#include <shell.h>

int env(char** args)
{
    int pos = 0;
    (void)(**args);

    while (environ[pos])
    {
        write(STDOUT_FILENO, environ[pos], strlen(environ[pos]));
        write(STDOUT_FILENO, "\n", 1);
        pos++;
    }
    return (-1);
}