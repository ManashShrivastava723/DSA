#include <iostream>
using namespace std;

// Function to check if a number is a power of 2
bool isPowerOfTwo(int n) {
    if (n == 0) 
       return false;
    return ((n & (n - 1)) == 0);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    if (isPowerOfTwo(n)) {
        cout << n << " is a power of 2." << endl;
    } else {
        cout << n << " is not a power of 2." << endl;
    }
    return 0;
}