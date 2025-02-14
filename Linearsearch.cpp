#include <iostream>
using namespace std;

int main() {
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int n = 10;
    int Key;  
    
    cout << "Enter Your Numbers (to replace the initialized ones):" << endl;
    
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Enter Key: ";
    cin >> Key;  

    
    for(int i = 0; i < n; i++) {
        if(Key == A[i]) {
            cout << "Found at index " << i << endl;
            return 0; 
        }
    }

    
    cout << "Not found" << endl;
    
    return 0;
}
