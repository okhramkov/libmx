#include "libmx.h"

char *mx_strdup(const char *str) {
    int size = mx_strlen(str);
    char *a = mx_strnew(size);
    mx_strcpy(a, str);
    return a;
}
