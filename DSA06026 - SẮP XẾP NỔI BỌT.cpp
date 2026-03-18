#include <stdio.h>

int main() {
	int n, a[100], i;
//EX: n=4, 9(0) 4(1) 6(2) 2(3)
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++) {
		int check = 0;
		/* i=0, thì j<3
		nếu a[0] > a[1] {9>4}
		thì a[0] = a[1] = 4
		và

		*/
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				int bien_tam = a[j];
				a[j] = a[j + 1];
				a[j + 1] = bien_tam;

				check = 1;
			}
		}

		if (check == 0) break;

		printf("Buoc %d: ", i + 1);
		for (int k = 0; k < n; k++) printf("%d ", a[k]);
		printf("\n");
	}

	return 0;
}