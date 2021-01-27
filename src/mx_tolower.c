#include "libmx.h"

int mx_tolower(int c){
    if(c>=65 && c<=90) {
        return c + 32;
    }
    else if(c>96 && c<123) {
        return c;
    }
    return 0;
    
}
