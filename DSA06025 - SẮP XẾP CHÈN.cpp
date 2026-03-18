#include <stdio.h>

int main() {
    int n, a[100];

    // Nhập số lượng phần tử
    if (scanf("%d", &n) != 1) return 0;

    // Nhập mảng
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Buoc 0: Luôn là phần tử đầu tiên của dãy
    printf("Buoc 0: %d\n", a[0]);

    // Bắt đầu thuật toán sắp xếp chèn từ phần tử thứ 2 (chỉ số i = 1)
    for (int i = 1; i < n; i++) {
        int chen = a[i];      // Giá trị đang xét để chèn
        int duyetve = i - 1;  // Vị trí bắt đầu duyệt ngược lại

        // Tìm vị trí thích hợp và đẩy các phần tử lớn hơn sang phải
        while (duyetve >= 0 && a[duyetve] > chen) {
            a[duyetve + 1] = a[duyetve];
            duyetve--;
        }

        // Đặt giá trị vào vị trí trống tìm được
        a[duyetve + 1] = chen;

        // In kết quả từng bước: In từ index 0 đến i
        printf("Buoc %d: ", i);
        for (int k = 0; k <= i; k++) {
            printf("%d", a[k]);
            if (k < i) printf(" "); // In khoảng trống giữa các số
        }
        printf("\n");
    }

    return 0;
}