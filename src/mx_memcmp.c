#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *str1 = s1;
    const unsigned char *str2 = s2;
    unsigned int i = 0;

    if (n == 0)
        return 0;
    else {
        while (str1[i] == str2[i] && i != n - 1) {
            if (str1[i] == '\0' && str2[i] == '\0')
                return 0;
            i++;
        }
        return str1[i] - str2[i];
    }
}

// int main() {
//     const unsigned char s1[5] = "11345";
//     const unsigned char s2[5] = "12345";
//     const unsigned char s3[5] = "12346";
//     size_t n = 5;
//     printf("1: %d\n", mx_memcmp(s2, s1, n));
//     printf("2: %d\n", mx_memcmp(s1, s3, n));
// }
