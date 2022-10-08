#include<iostream>
#include<string>
int main() {
    std::string num;
    int L = 0, R = 0, mid = 0;
    bool ans = false;
    std::cin >> num;
    for(int i = 0; i < num.length() - 1; i++) {
        mid++;
        L = 1;
        R = 1;
        ans = false;
        for(int j = 0; j < mid; j++)
            L *= num[j] - '0';
        for(int k = mid; k < num.size(); k++)
            R *= num[k] - '0';
        if(L == R) {
            ans = true;
            break;
        }
    }
    
    (ans == true ? std::cout << "YES\n" : std::cout << "NO\n");
    return 0;
}