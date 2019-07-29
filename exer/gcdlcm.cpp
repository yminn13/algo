/**
 * boj 2609
 */
#include <iostream>

using namespace std;

int gcd (int a, int b) {
    int rem;
    while (b != 0) {
        rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int lcm (int a, int b) {
    return a * b / gcd(a, b);
}

int main (void) {
    cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
    int a, b;
    cin >> a >> b;
    cout << gcd (a, b) << " " << lcm (a, b) << "\n";
    return 0;
}