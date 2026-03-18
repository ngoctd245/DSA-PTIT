#include <iostream>
using namespace std;

void intamgiac(int A[], int n) {	 		//hàm đệ quy
	if (n < 1) return;						//dừng nếu ban đầu nhập n = 0

//Bước 1: in mảng hiện tại
	cout << "[";
	for (int i = 0; i < n; i++) {
		cout << A[i];
		if (i < n - 1) cout << " "; 		//in khoảng cách nếu không phải số cuối
	}
	cout << "]" << endl;

	if (n == 1) return; 					//dừng nếu chạm cấu hình cuối

//Bước 2: tính hàng tiếp theo
	int B[100];
	//if (n > 1) { Bước 2, 3 }
	for (int i = 0; i < n - 1; i++) B[i] = A[i] + A[i + 1];

//Bước 3: gọi lại hàm đệ quy
	intamgiac (B, n - 1);					//lặp lại nhưng là với dữ liệu kế tiếp
}


int main () {
	int T; cin >> T;
	int N;
	while (T--) {
		cin >> N;

		int A[100];
		for (int i = 0; i < N; i++) cin >> A[i];
		intamgiac (A, N);
	}
	return 0;
}