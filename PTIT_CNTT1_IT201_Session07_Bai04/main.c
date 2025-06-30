#include <stdio.h>


#include <stdio.h>
#include <string.h>

void sapXepChuoi(char *str) {
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str[1001]; // Giới hạn max 1000 ký tự

    printf("Nhập chuỗi bất kỳ: ");
    fgets(str, sizeof(str), stdin);

    // Xóa ký tự newline nếu có
    str[strcspn(str, "\n")] = '\0';

    printf("\nTrước khi sắp xếp: %s\n", str);

    sapXepChuoi(str);

    printf("Sau khi sắp xếp: %s\n", str);

    return 0;
}
