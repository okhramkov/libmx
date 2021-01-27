#include "libmx.h"

int mx_get_char_index(const char *str, char c) {
    int i = 0;
    if (!str || !c)
        return -2;
    while (str[i]) {
        if (str[i] == c)
            break;
        i++;
    }
        if (str[i] == '\0')
            return -1;
    return i;
}
