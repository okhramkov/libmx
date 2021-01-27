#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
    size_t i;
    char *arr = (char *) s;
    if(!s)
        return NULL;
    for(i = 0; arr[i] && i < n; i++) {
        if (arr[i] == c)
            return (void *) &arr[i];
    }
    return NULL;
}

// int main() {
//     char arr[10] = "1234567890";
//     int c = '3';
//     size_t n = 10;
//     printf("%s", mx_memchr(arr, c, n));
//     printf("\n");

// }
