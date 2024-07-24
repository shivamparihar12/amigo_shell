# compiler to use
CC = gcc

#compiler flags
CFLAGS = -Wall -Werror

#Target executable name
TARGET = amigo_shell

#source files
SRCS = main.c cd.c env.c execute_args.c Exit.c help.c new_process.c read_line.c repl_loop.c tokenize_line.c


#Default rule to build the target
$(TARGET):$(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)


clean:
	rm -f $(TARGET)