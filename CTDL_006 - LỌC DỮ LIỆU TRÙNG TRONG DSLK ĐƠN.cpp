#include <iostream>
using namespace std;

int A[1000000];
int f[1000000] = {};

int main ()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
		f[A[i]]++;
		if (f[A[i]] == 1) cout << A[i] << " ";
	}

}