#include "libmx.h"

int mx_sqrt(int x) {
	int rslt = x;
	int div = x;

	for (; x > 0;) {
        div = (x / div + div) / 2;
        if (rslt > div)
            rslt = div;
        else if (rslt * rslt != x)
            return 0;
        else
            return rslt;
    }
    return 0;
}

//  int main(void) {
//  	int j = 0;
//  	for(j = 0; j <= 49; j++)
//  		printf("%d is %d \n", j, mx_sqrt(j));
//  	printf("10000000 is %d \n", mx_sqrt(-2147483648));
//  }
