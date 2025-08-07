
#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 0;
    int b = 15;
    int res = gcd(a,b);
    cout << "The gcd of " << a << " and " << b << " is " << res;
    return 0;
}