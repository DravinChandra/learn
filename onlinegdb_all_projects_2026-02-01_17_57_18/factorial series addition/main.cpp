#include <iostream>
using namespace std;

long long fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

long long sumFact(int n) {
    if (n == 1)
        retur

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    long long result = sumFact(N);
    cout << "Sum of series 1! + 2! + ... + " << N << "! = " << result << endl;
    return 0;
}