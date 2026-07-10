#include <iostream>
using namespace std;

int main() {
    int age = 20;
    bool hasID = true;
    bool raining = false;

    // Logical AND (&&)
    if (age >= 18 && hasID) {
        cout << "AND (&&): Allowed to enter" << endl;
    }

    // Logical OR (||)
    if (age >= 18 || hasID) {
        cout << "OR (||): At least one condition is true" << endl;
    }

    // Logical NOT (!)
    if (!raining) {
        cout << "NOT (!): Go outside" << endl;
    }

    return 0;
}