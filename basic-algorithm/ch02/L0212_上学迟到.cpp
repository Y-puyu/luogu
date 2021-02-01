#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int s, v;
    cin >> s >> v;
    int a = ceil(1.0 * s / v) + 10;     // 花费总分钟数
    int b = 60 * (24 + 8) - a;          // 距前一天零点的分钟数
    int c = (b / 60) % 24;              // 小时
    int d = b % 60;                     // 分钟
    printf("%02d:%02d\n", c, d);
    return 0;
}