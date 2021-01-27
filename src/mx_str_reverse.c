#include "libmx.h"

void mx_str_reverse(char *s) {
	for (int i = 0, j = mx_strlen(s) - 1; i < j; i++, j--)
		mx_swap_char(&s[j], &s[i]);
}

// int main(void) {
//  	char s[] = "fucking game over 54321";
//  	mx_str_reverse(s);
//     printf("%s", s);
// }
