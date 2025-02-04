#include <iostream>
using namespace std;

int main() {
    int num, n;

    // Taking input from the user
    cout << "Enter the first number (num): ";
    cin >> num;

    cout << "Enter the second number (n): ";
    cin >> n;

    // Checking divisibility
    if (n == 0) {
        cout << "Division by zero is not allowed." << endl;
    } else if (num % n == 0) {
        cout << num << " is divisible by " << n << "." << endl;
    } else {
        cout << num << " is not divisible by " << n << "." << endl;
    }

    return 0;
}
