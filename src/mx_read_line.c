#include "../inc/libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
    if (lineptr == NULL || *lineptr == NULL || !buf_size || read(fd, NULL, 0)) {
        return -2;
    }

    buf_size = 1;
    char buf;

    int len = 0;
    while (read(fd, &buf, buf_size)) {
        if (buf == delim) {
            return len;
        }

        (*lineptr)[len++] = buf;
    }

    return -1;
}

