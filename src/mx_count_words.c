#include "libmx.h"

int mx_count_words(const char *str, char delimiter) {
	int i = 0;
	int count = 0;
    int temp = 0;

    if(!str)
        return -1;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != delimiter)
            temp = 1;
        if (str[i] == delimiter && temp) {
            temp = 0;
            count++;
        }
    }
	if (str[i - 1] != delimiter)
		count++;
	return count;
}
