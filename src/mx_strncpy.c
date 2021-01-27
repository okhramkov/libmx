#include "libmx.h"

char *mx_strncpy(char *dst, const char *src, int len) {
	for(int i = 0; i < len; i++)
		dst[i] = src[i];
	return dst;
}

// int main(void) {
// 	char src[] = "you are my knigga";
// 	char dst[17];
// 	mx_strncpy(dst, src, 5);
// 	printf("%s", dst);
// }
