#include <iostream>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

ll lcm(ll a, ll b) {
    if (a == 0 || b == 0) return 0;
    return abs(a / gcd(a, b) * b);  // Or use: abs(a * (b / gcd(a, b)))
}

int main() {
    ll a, b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;

    ll res = lcm(a, b);
    cout << "\nThe lcm of " << a << " and " << b << " is " << res << endl;
    return 0;
}
