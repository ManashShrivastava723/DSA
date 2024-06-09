#include <bits/stdc++.h>
using namespace std;

vector<long long> lcmandgcd(long long a, long long b) {
    long long gcd = __gcd(a, b);
    long long lcm = (a / gcd) * b;
    return {lcm, gcd};
}

int main() {
    long long a;
    long long b;
    cin >> a >> b;

    vector<long long> result = lcmandgcd(a, b);
    cout << "LCM: " << result[0] << ", GCD: " << result[1] << endl;

    return 0;
}
