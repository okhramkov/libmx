#include "libmx.h"

int mx_bubble_sort(int *arr, int size) {
    int iter = 0;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                iter++;
            }
        }
    }
    return iter;
}

// int main(void) {
//    int arr[] =  {68, -20, 2};
//    int size = 3;
//    printf("%d", mx_bubble_sort(arr, size));
//     printf("%c",'\n');
// }
