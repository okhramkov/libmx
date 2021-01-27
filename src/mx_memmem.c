#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little,
                size_t little_len) {
    char *current;
    char *last;
    const char *cl = (const char *)big;
    const char *cs = (const char *)little;

    if (big_len == 0 || little_len == 0 || big_len < little_len)
        return NULL;
    if (little_len == 1)
        return mx_memchr(big, (int)*cs, big_len);
    last = (char *)cl + big_len - little_len;
    for (current = (char *)cl; current <= last; current++)
        if (current[0] == cs[0] && mx_memcmp(current, cs, little_len) == 0)
            return current;
    return NULL;
}
