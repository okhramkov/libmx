#include "libmx.h"

int count = 0;

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;

}

int partition(int *arr, int left, int right) {
  int pivot = arr[right];
  int i = (left - 1);
  for (int j = left; j < right; j++) {
    if (arr[j] <= pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }

    swap(&arr[i + 1], &arr[right]);
    count++;
    return (i + 1);
}

int mx_quicksort(int *arr, int left, int right) {
    if (left < right) {
        int pi = partition(arr, left, right);
        mx_quicksort(arr, left, pi - 1);
        mx_quicksort(arr, pi + 1, right);
    }
    return count;
}


// int main() {
//     int arr[] = {53, 79, -30, -25, -18, -28, -3};
//     int left = 0;
//     int right = 6;
//     printf("%d", mx_quicksort(arr, left, right));
// }
