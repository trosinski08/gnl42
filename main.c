#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "./include/get_next_line.h"

//cc -Wall -Wextra -Werror -D BUFFER_SIZE=32 main.c ./bonus/get_next_line_bonus.c ./mini_libft/get_next_line_utils.c -o get_next_line_test
//./get_next_line_test ./mandatory/get_next_line.c

int main(int argc, char **argv)
{
    int fd;
    char *line;

    if (argc != 2)
        return (printf("File: %s\n", argv[0]), 1);
    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        return (perror("Błąd przy otwieraniu pliku"), 1);
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }
    if (close(fd) == -1)
        return (perror("Błąd przy zamykaniu pliku"), 1);
    return (0);
}
