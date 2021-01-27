#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    int len;
    if (!str || !sub)
        return -2;
    len = mx_strlen(sub) - 1;
    for (int i = 0; *str; i++) {
        if(mx_strncmp(str, sub, len) == 0)
            return i;
        str++;
    }
    return -1;
}
