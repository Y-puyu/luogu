#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;
    int res = 1;
    while ( -- n) {
        res += 1;
        res *= 2;
    }
    cout << res << endl;
    return 0;
}