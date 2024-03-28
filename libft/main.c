#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int    main(void)
{
    int fd = open("get_next_line.c", O_RDONLY);
    int    i = 0;
    char    *next_line = NULL;
    while (i < 10000000)
    {
        next_line = get_next_line(fd);
        if (!next_line)
            return (printf("next_line[%d] = %s\n", i, next_line));
        printf("next_line[%d] = %s", i, next_line);
        free(next_line);
        i++;
    }
    return (0);
}
