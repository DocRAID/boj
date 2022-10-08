#include <iostream>
int main() {
    int n;
    while (std::cin>>n) {
        int num = 0;
        for (int i = 1;i<=n; i++) {
            num = num * 10 + 1;
            num %= n;
            if (num == 0) {
                std::cout<<i<<"\n";
                break;
            }
        }
    }
    return 0;
}