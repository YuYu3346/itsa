#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num < -128 || num > 127) {
        cout << "error！" << endl;
        return 0;
    }

    for (int i = 7; i >= 0; i--) {
        cout << ((num >> i) & 1);
    }
    cout << endl;

    return 0;
}