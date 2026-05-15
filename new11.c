#include <stdio.h>
#include <stdlib.h>
int quicksort(int arr[], int start, int end) {
    int pivot = arr[end];
    int i = start - 1, j;

    for(j = start; j < end; j++) {
        if(arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[end];
    arr[end] = temp;
    return i + 1;
}
void partition(int arr[], int start, int end) {
    if(start < end) {
        int pivot = quicksort(arr, start, end);
        partition(arr, start, pivot - 1);
        partition(arr, pivot + 1, end);
    }
}
int main() {
    int n, i;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    partition(a, 0, n - 1);
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}