#include <iostream>
using namespace std;

int A[1000005];

int binaryseach (int A[], int n, int x) {
	int low = 0;
	int high = n - 1;
	while (low <= high) {
		int mid = (low + high) / 2;

		if (x > A[mid])
			low = mid + 1;
		else if (x < A[mid])
			high = mid - 1;
		else
			return 1;

	}
	return (-1);
}

int main () {
	int T, n, X;
	cin >> T;
	while (T--) {
		cin >> n >> X;
		int i;
		for (i = 0; i < n; i++) {
			cin >> A[i];
		}
		cout << binaryseach(A, n, X) << endl;
	}
	return 0;
}