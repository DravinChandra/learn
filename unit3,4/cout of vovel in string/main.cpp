#include <iostream>
#include <string>
using namespace std;

int countVowels(string s) {
    int count = 0;
    for (char c : s) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || 
            c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    string s1, s2, s3;

    cout << "Enter first string: ";
    getline(cin, s1);

    cout << "Enter second string: ";
    getline(cin, s2);

    cout << "Enter third string: ";
    getline(cin, s3);

    cout << "\nVowels count:\n";
    cout << "String 1: " << countVowels(s1) << endl;
    cout << "String 2: " << countVowels(s2) << endl;
    cout << "String 3: " << countVowels(s3) << endl;

    return 0;
}
