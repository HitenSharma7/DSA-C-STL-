#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int binary;
    cout << "Enter binary number: ";
    cin >> binary;

    int decimal = 0;
    int i = 0;

    while (binary > 0) {
        int digit = binary % 10;      // Last digit
        decimal = decimal + digit * pow(2, i);

        binary = binary / 10;
        i++;
    }

    cout << "Decimal = " << decimal;

    return 0;
}