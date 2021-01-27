#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
    int needle_len = mx_strlen(needle);

    if(!needle)
        return (char *) haystack;
    for(; *haystack; haystack++)
        if(mx_strncmp(haystack, needle, needle_len) == 0)
            return(char *) haystack;
    return NULL;
}
