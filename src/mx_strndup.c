#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    char *dst = NULL;
    if (!s1)
        return mx_strdup("\0");
    if (n > (unsigned long) mx_strlen(s1))
        return mx_strdup(s1);
    dst = mx_strnew(n);
    mx_strncpy(dst, s1, n);
    return dst;
}
