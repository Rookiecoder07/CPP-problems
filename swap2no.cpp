#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Swapping using a temporary variable
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping:\n";
    cout << "a = " << a << "\nb = " << b << "\n";

    return 0;
}
