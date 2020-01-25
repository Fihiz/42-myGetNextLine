
#include "get_next_line.h"

int     main()
{
    char *str;
    int fd = open("a", O_RDONLY);
    int zob;
    while (1)
    {
        zob = get_next_line(fd, &str);
        printf("LIGNE{%d}[%s]\n", zob, str);
        free(str);
        if (zob < 1)
            break;
    }
    return (0);
}
