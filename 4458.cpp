#include <iostream>
#include <string>
int main() {
    std::string k;
    int n;
    std::cin >> n;
    std::cin.ignore();
    while(n--)
    {
        getline(std::cin,k);
        
        if ('a' <= k[0] && k[0] <= 'z')
            k[0] -= 32;
        std::cout << k << '\n';
    }
}