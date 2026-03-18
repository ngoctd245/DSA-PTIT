//XÓA DỮ LIỆU TRONG DSLK ĐƠN
#include <iostream>
using namespace std;

int A[1000000]; //Khai báo mảng ngoài

int main ()
{
	int n; cin >> n; //nhập số lượng phần tử
	for (int i = 0; i < n; i++) cin >> A[i]; //nhập các phần tử

	int d; cin >> d; //nhập phần tử cần xóa
	for (int i = 0; i < n; i++)
		if (A[i] != d) cout << A[i] << " ";
//vòng lặp nếu gặp số khác phần tử cần xóa thì in ra
}