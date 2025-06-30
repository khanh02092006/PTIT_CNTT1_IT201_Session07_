#include <stdio.h>
#include <stdlib.h>

// Quick Sort
void quickSort(int *arr, int left, int right) {
    if (left >= right) return;

    int pivot = arr[(left + right) / 2];
    int i = left;
    int j = right;

    while (i <= j) {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;

        if (i <= j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    quickSort(arr, left, j);
    quickSort(arr, i, right);
}

int main() {
    int n;

    // Nhập số lượng phần tử
    do {
        printf("Nhập số lượng phần tử (1-1000): ");
        scanf("%d", &n);
        if (n < 1 || n > 1000) {
            printf("Không hợp lệ, nhập lại.\n");
        }
    } while (n < 1 || n > 1000);

    // Cấp phát động
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Cấp phát bộ nhớ thất bại!\n");
        return 1;
    }

    // Nhập mảng
    for (int i = 0; i < n; i++) {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // In mảng trước khi sắp xếp
    printf("\nMảng trước khi sắp xếp:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Gọi Quick Sort
    quickSort(arr, 0, n - 1);

    // In mảng sau khi sắp xếp
    printf("\n\nMảng sau khi sắp xếp:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Giải phóng bộ nhớ
    free(arr);
    return 0;
}
