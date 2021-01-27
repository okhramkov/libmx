#include "libmx.h"

char *mx_itoa(int number) {
    char *str = NULL;
    int size = 0;
    int kost = 0;

    if (number == 0)
        return "0";
    if (number < 0 && number != INT_MIN) {
        number *= -1;
        size = 1;
        kost = 1;
    }
    if (number == INT_MIN)
        return "-2147483648";
    for (int temp = number; temp; temp /= 10, size++);
    str = mx_strnew(size);
    (kost == 1) ? str[0] = '-' : 1;
    for ( ;number > 0; number/= 10)
        str[--size] = (char)(number % 10 + 48);
    return str;
}
