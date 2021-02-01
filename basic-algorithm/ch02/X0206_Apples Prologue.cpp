#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (!b) cout << 0 << endl;
    else cout << max(0, int(a - ceil(1.0 * c / b))) << endl;
    return 0;
}