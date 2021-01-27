#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    char *arr = (void *) s;
    if(!s)
        return NULL;
    for(size_t i = mx_strlen(arr); n > 0; i--, n--) {
        if(arr[i] == c)
            return (void *) &arr[i];
    }
    return NULL;
}
