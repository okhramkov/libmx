#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    char *hex = NULL;
    int temp = 0;
    int lengt = 0;

    if(nbr == 0)
        return 0;
    for(temp = nbr; temp !=0; lengt++)
        temp /= 16;
    hex = mx_strnew(lengt);
    lengt--;
    while(nbr != 0) {
        temp = nbr % 16;
        if(temp < 10)
            hex[lengt--] = temp + 48;
        else
            hex[lengt--] = temp + 87;
        nbr /= 16;                  
    }
    return hex;
}

/*
int main(void) {
    int nbr = 1000;
    char *hex;
    hex = mx_nbr_to_hex(nbr);
    printf("%s", hex);
}
*/
