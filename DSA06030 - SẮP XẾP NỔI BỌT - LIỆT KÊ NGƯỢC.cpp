#include <iostream>
using namespace std;

int save[105][105];

void bubbleSortReverse(int a[], int n)
{
    int lineN = 0;
    for (int i = 0; i < n; i++)
    {
        int check = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                check = 1;
            }
        }

        // Dừng khi không còn cặp nào sai thứ tự
        if (check == 0) break;

        // Lưu trạng thái sau mỗi bước
        for (int k = 0; k < n; k++) {
            save[lineN][k] = a[k];
        }
        lineN++;
    }

    // Liệt kê ngược
    for (int i = lineN - 1; i >= 0; i--) {
        cout << "Buoc " << i + 1 << ":";
        for (int j = 0; j < n; j++) {
            cout << " " << save[i][j];
        }
        cout << endl;
    }
}

int main() {
    // Tối ưu nhập xuất
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    // Nhập số bộ test T
    if (!(cin >> T)) return 0;

    while (T--) {
        int n, a[105];
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bubbleSortReverse(a, n);
    }

    return 0;
}