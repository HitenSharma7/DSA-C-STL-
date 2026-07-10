#include<iostream>
using namespace std;

int main() {

    // Normal integer variable
    int num = 50;

    // Address of num
    cout << "Address of num: " << &num << endl;

    // Pointer storing address of num
    int *ptr = &num;

    // Pointer contains address of num
    cout << "Value inside ptr (address of num): " << ptr << endl;

    // Dereference operator (*)
    // Accesses value stored at that address
    cout << "Value pointed by ptr: " << *ptr << endl;

    // Address of pointer variable itself
    cout << "Address of ptr: " << &ptr << endl;

    return 0;
}