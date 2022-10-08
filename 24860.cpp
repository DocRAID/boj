#include <iostream>
int main() {
    long long v1, j1, v2, j2, v, d, j;
    std::cin >> v1 >> j1 >> v2 >> j2 >> v >> d >> j;
    std::cout << (v*j*d)*(v1*j1+v2*j2);
}