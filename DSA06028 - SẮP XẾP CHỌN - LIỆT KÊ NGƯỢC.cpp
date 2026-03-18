#include <iostream>
using namespace std;

int save[1000][1000];

void selectionsoft (int A[], int n)
{
	int lineN = 0;
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;

		for (int j = i + 1; j < n; j++) if (A[min] > A[j]) min = j;
		swap (A[min], A[i]);

		for (int k = 0; k < n; k++) save[lineN][k] = A[k];
		lineN++;
	}
	for (int i = lineN - 1; i >= 0; i--)
	{
		cout << "Buoc " << i + 1 << ":";
		for (int j = 0; j < n; j++) {
			cout << " " << save[i][j];
		}
		cout << endl;
	}
}

int main ()
{
	int n, A[100];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> A[i];
	selectionsoft (A, n);

}