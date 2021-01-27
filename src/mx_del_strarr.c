#include "libmx.h"

void mx_del_strarr(char ***arr) {
    char **tmp_arr = *arr;
    if (!arr)
        return;
    for (int i = 0; tmp_arr[i] != NULL; i++) 
        mx_strdel(&tmp_arr[i]);
    free(*arr);
    *arr = NULL;
}

// int main() {
//     char **arr = (char **)malloc(sizeof(char *) * 4);
//     arr[0] = strdup("abc"); arr[1] = strdup("xyz"); arr[2] = strdup("Meo"); arr[3] = NULL;
//     mx_printstr("strarr before mx_del_strarr is abc  xyz  (null)? | "); printf("%s  %s  %s\n", arr[0], arr[1], arr[2]); 
//     mx_del_strarr(&arr);
//     mx_printstr("strarr after mx_del_strarr is (null)? | "); printf("%s\n", (char *) arr);
//     system("leaks -q a.out");
// }
