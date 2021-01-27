#include "libmx.h"

int mx_strncmp(const char *s1, const char *s2, int n) {
    int i = 0;

    if (n == 0)
        return 0;
    for(i = 0; s1[i] == s2[i] && i < n - 1; i++)
        if (s1[i] == '\0' && s2[i] == '\0')
            return 0;
    return (unsigned char) s1[i] - (unsigned char) s2[i];
}
