#include "libmx.h"

void *mx_memset (void *b, int c, size_t len) {
    unsigned char *ptr = b;
    while (len-- > 0)
        *ptr++ = c;
    return b;
}

// int main() {
//     char arr[10] = "1234567890";
//     int c = '1';
//     size_t len = 10;
//     mx_memset(arr, c, len);
//     printf("arr: %s\n", arr);
// }
