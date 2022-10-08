#include <iostream>
#include <algorithm>
#include <cmath>
int main() {
    double a, b, c, ans;
    std::cin>>a>>b>>c;
    ans = ((a + 1)*(b + 1) / (c + 1)) - 1;
    std::cout<<floor(ans);
}
