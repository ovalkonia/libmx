#include "../inc/libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
    if (lineptr == NULL || !buf_size || read(fd, NULL, 0)) {
        return -2;
    }

    buf_size = 1;
    char buf;
    char *line = mx_strnew(0);

    int len = 0;
    while (read(fd, &buf, buf_size)) {
        if (buf == delim) {
            *lineptr = line;
            return len;
        }

        char *temp = line;
        line = mx_strjoin(line, &buf);
        free(temp);
        ++len;
    }

    return -1;
}

