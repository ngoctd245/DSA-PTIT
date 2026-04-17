#include <iostream>
using namespace std;

void check_min_max(int a, int A[], int b, int B[]) {

    for (int i = 0; i < a; i++) cin >> A[i]; 
    
    for (int j = 0; j < b; j++) cin >> B[j]; 

    long long max = A[0];
    for (int i = 0; i < a; i++) {
        if (max < A[i]) {
            max = A[i];
        }
    }

    long long min = B[0];
    for (int j = 0; j < b; j++) {
        if (min > B[j]) {
            min = B[j];
        }
    }

    long long mpc = max * min;
    cout << mpc << endl;
}

int A[1000005];
int B[1000005];

int main () {
    int T; cin >> T;
    while (T--) {
    	int a, b;
    	cin >> a >> b;
        check_min_max (a, A, b, B);
    }
    return 0;
}
