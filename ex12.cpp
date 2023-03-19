#include <iostream>
using namespace std;

int f(int);

int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}

int f(int n) {
    if (n == 1 || n == 0) {
        return n + 1;
    }
    else {
        return (f(n - 1) + f(n / 2));
    }
}
