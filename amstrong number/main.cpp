#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp, sum = 0, d = 0;

    cout << "Enter the number: ";
    cin >> n;

    temp = n;

    // Count digits
    int t = n;
    while (t > 0) {
        d++;
        t /= 10;
    }

    // Reset t for Armstrong calculation
    t = n;
    while (t > 0) {
        int digit = t % 10;
        sum += pow(digit, d);
        t /= 10;
    }

    if (sum == temp)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}
