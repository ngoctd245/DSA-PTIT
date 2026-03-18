#include <iostream>
#include <string>
using namespace std;

int A[36], n;

bool ok = true;

void ktao() {
	for (int i = 0; i < n; i++) A[i] = 0;
}

void sinh() {
	int i = n - 1;
	while (i >= 0 && A[i] == 1) {
		A[i] = 0;
		i--;
	}
	if (i < 0) ok = false;

	else A[i] = 1;
}

int main () {
	int T; cin >> T;
	while (T--) {
		string s; cin >> s;
		n = s.length();

		for (int i = 0; i < n; i++) {
			A[i] = s[i] - '0'; // Chuyển ký tự '0'/'1' thành số 0/1
		}

		// Bước 2: Thực hiện sinh xâu kế tiếp
		sinh();

		// Bước 3: In mảng A ra màn hình
		for (int i = 0; i < n; i++) {
			cout << A[i];
		}
		cout << endl;
	}
}
?? ?? ?? ?? ?? ?? ?? ?? ?? ??