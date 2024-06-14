#include <shell.h>

int new_process(char** args) {
    pid_t process_id;
    int status;
    process_id = fork();
    if (process_id == 0) {
        if (execvp(args[0], args) == -1)
            perror("error in new_proceess, with creation ofchild process");

        exit(EXIT_FAILURE);
    }
    else if (process_id < 0) {
        perror("Error in forking");
    }
    else {
        do
        {
            waitpid(process_id, &status, WUNTRACED);
        } while (!WIFEXITED(status) && !WIFSIGNALED(status))
    }
    return -1;
}