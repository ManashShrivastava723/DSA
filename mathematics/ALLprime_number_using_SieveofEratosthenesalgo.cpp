#include <bits/stdc++.h>
using namespace std;

void totalprimenumber(int n) {
    vector<bool> isprime(n + 1, true);
    isprime[0] = isprime[1] = false; // 0 and 1 are not prime numbers

    for (int i = 2; i * i <= n; i++) {
        if (isprime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isprime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (isprime[i])
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    cout << "Prime numbers are: ";
    totalprimenumber(n);
    return 0;
}
