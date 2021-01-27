#include "libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long nbr = 0;
    if(hex == NULL)
        return 0;
    for(int i = 0; hex[i]; i++) {
        if(mx_isdigit(hex[i]))
            nbr = nbr * 16  + (hex[i] - 48);
        if(mx_islower(hex[i]) && hex[i] <= 'f')
            nbr = nbr * 16 + (hex[i] - 87);
        if(mx_isupper(hex[i]) && hex[i] <= 'F')
            nbr = nbr * 16 + (hex[i] - 55);
    }
    return nbr;
}


// int main(void) {
//     char *hex = "FADE";
//     unsigned long nbr;
//     nbr = mx_hex_to_nbr(hex);
//     printf("%ld", nbr);
// }
