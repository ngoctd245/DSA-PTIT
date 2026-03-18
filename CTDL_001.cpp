#include <iostream>
using namespace std;

int n, A[20], B[20];

bool ok = true;     //gắn cờ

void ktao() {      //khởi tạo giá trị ban đầu là 00...0
    for (int i = 0; i < n; i++) A[i] = 0;
}

void sinh() {        //thuật toán sinh kết hợp với vòng lặp (while (ok)) cho ra kq từ 00...0 đến 11...1
    int i = n - 1;
    while (i >= 0 && A[i] == 1) {
        A[i] = 0;
        i--;
    }
    if (i < 0) ok = false;

    else A[i] = 1;
}

bool DX(int A[], int n) {   //thuật toán kiểm tra đối xứng
    for (int i = 0; i < n; i++) {
        B[i] = A[(n - 1) - i];
        if (A[i] != B[i]) return false;
    }
    return true;
}

int main () {
    cin >> n;
    ktao ();

    while (ok)
    {
        if (DX(A, n))
        {
            for (int i = 0; i < n; i++)  cout << A[i] << " ";
            cout << endl;
        }
        sinh();
    }
}
