#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    char *dst = NULL;
    int mem;
    int j = 0;

    if (!str || !sub || !replace)
        return NULL;
    mem = mx_count_substr(str, sub);
    dst = mx_strnew(mx_strlen(str) +
            ((mx_strlen(replace)) - (mx_strlen(sub))) * mem);
    for (int i = 0; str[j]; ) {
        if (mx_strncmp(&str[j], sub, mx_strlen(sub)) == 0) {
            mx_strcat(dst, replace);
            i += mx_strlen(replace);
            j += mx_strlen(sub);
        }
        else
            dst[i++] = str[j++];
    }
    return dst;
}
