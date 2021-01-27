#include "libmx.h"

void *mx_memccpy(void *restrict dst, 
const void *restrict src, int c, size_t n) {
    size_t i;

    for (i = 0; i < n; i++) {
        ((unsigned char *) dst)[i] = ((const unsigned char *) src)[i];
        if (((const unsigned char *)src)[i] == (unsigned char)c)
            return ((unsigned char *) dst) + (i + 1);
    }
    return NULL;
}

// int main() {
//     char memccpy_dest1[10] = "123456789";
//     char memccpy_dest2[10] = "123456789";
//     mx_printstr("memccpy    return\t    | "); mx_printstr(memccpy(memccpy_dest1, "54321", '3', 8));
//     mx_printstr("|\nmx_memccpy return the same? | "); mx_printstr(mx_memccpy(memccpy_dest2, "54321", '3', 8)); mx_printstr("|\n");
//     printf("dst after memccpy    is | %s|\ndst after mx_memccpy is | %s|\n", memccpy_dest1, memccpy_dest2);
//     printf("memccpy    return\t    | %s|\n", memccpy(memccpy_dest1, "54321", 'a', 8));
//     printf("mx_memccpy return the same? | %s|\n", mx_memccpy(memccpy_dest2, "54321", 'a', 8));
// }
