#include<iostream>
int main() {
    long long n;
    std::cin>>n;
    long long result=1;
    result+=n*2;
    result+=n*2-1;

    std::cout<<result;
}
