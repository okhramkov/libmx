#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
   if (src == NULL)
       return NULL;
    for (size_t i = 0; i < n; i++)
        ((unsigned char *) dst)[i] = ((unsigned char *)src)[i];
    return (void *) dst;
}
