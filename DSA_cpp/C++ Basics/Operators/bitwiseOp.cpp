#include <iostream>
using namespace std;

int main() {
    int a = 5;  // Binary: 0101
    int b = 3;  // Binary: 0011

    cout << "a & b = " << (a & b) << endl;   // AND
    cout << "a | b = " << (a | b) << endl;   // OR
    cout << "a ^ b = " << (a ^ b) << endl;   // XOR
    cout << "~a = " << (~a) << endl;         // NOT
    cout << "a << 1 = " << (a << 1) << endl; // Left Shift
    cout << "a >> 1 = " << (a >> 1) << endl; // Right Shift

    return 0;
}