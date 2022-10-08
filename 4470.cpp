#include<iostream>
int main(){
    int n;
    std::cin >> n;
    std::cin.ignore();
    for(int i = 1; i <= n; i++){
        std::string s;
        std::getline(std::cin,s);
        std::cout <<i<<". "<< s <<'\n';
    }
}