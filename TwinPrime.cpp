#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int start, end;

    cout << "Enter start of range: ";
    cin >> start;

    cout << "Enter end of range: ";
    cin >> end;

    cout << "Twin prime pairs:\n";

    for (int i = start; i <= end - 2; i++) {
        if (isPrime(i) && isPrime(i + 2)) {
            cout << "(" << i << ", " << i + 2 << ")" << endl;
        }
    }

    return 0;
}
