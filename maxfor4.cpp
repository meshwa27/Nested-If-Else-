#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    cout << "Enter four numbers (a, b, c, d): ";
    cin >> a >> b >> c >> d;

    if (a > b) {
        if (a > c) {
            if (a > d) {
                cout << "a is max: " << a;
            } else {
                cout << "d is max: " << d;
            }
        } else {
            if (c > d) {
                cout << "c is max: " << c;
            } else {
                cout << "d is max: " << d;
            }
        }
    } else {
        if (b > c) {
            if (b > d) {
                cout << "b is max: " << b;
            } else {
                cout << "d is max: " << d;
            }
        } else {
            if (c > d) {
                cout << "c is max: " << c;
            } else {
                cout << "d is max: " << d;
            }
        }
    }

    return 0;
}
