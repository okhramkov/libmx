#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int start = 0;
    int finish = size - 1;
    int midl;

    mx_bubble_sort_arr(arr, size);
    while(finish >= start) {
        midl = start + (finish - start) / 2;
        (*count)++;
        if(mx_strcmp(arr[midl], s) == 0)
            return midl;
        if(mx_strcmp(arr[midl], s) < 0)
            start = midl + 1;
        if(mx_strcmp(arr[midl], s) > 0)
            finish = midl - 1;
    }
    (*count) = 0;
    return -1;
}

// int main() {
//     char *arr_str[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
//     int count = 0;
//     int i = mx_binary_search(arr_str, 6, "ab", &count);
//     printf("The return from func %d\n", i);
//     printf("The return from func %d\n", count);
//     //printf("The count %d\n", count);
// }
