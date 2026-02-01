#include <iostream>
using namespace std;

double   fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    double  result = fact(N);
    cout << "" << N << "! = " << result << endl;
    return 0;
}