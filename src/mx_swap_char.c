#include "libmx.h"

void mx_swap_char(char *s1, char *s2) {
	char str = *s1;

	*s1 = *s2;	
	*s2 = str; 	
}

/* int main (void) {
 	// char str[] = "ONE";
 	// mx_swap_char(&str[0], &str[1]);
 	// mx_swap_char(&str[1], &str[2]);
 	// printf("%s\n", str);
 	char str[] = "Tuckint Fesg";
 	mx_swap_char(&str[0], &str[8]);
 	mx_swap_char(&str[6], &str[11]);
 	printf("%s\n", str);
 }*/
