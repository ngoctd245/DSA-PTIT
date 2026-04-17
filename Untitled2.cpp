#include <iostream>

using namespace std;

void check(int N) {
    long long nine = 9;  

    
    while (true) {
        
        if (nine % N == 0) {
            cout << nine << endl;
            return;
        }

       
        nine = nine * 10;
   
        if (nine % N == 0) {
            cout << nine << endl;
            return;
        }

        
        nine = nine * 10 + 9;
        
       
        if (nine > 1e18) {  
            
            cout << "Over" << endl;
            return;
        }
    }
}

int main() {
    int T; cin >> T;  
    while (T--) {
        int N; cin >> N; 
        check(N); 
    }
    return 0;
}
