#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int e, f;
    e = a * 60 + b, f = c * 60 + d;
    printf("%d %d\n", (f - e) / 60, (f - e) % 60);
    return 0;
}