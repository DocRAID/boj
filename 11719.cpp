#include<iostream>
#include<string>
using std::string;
int main(){
    string a;
    while(std::getline(std::cin,a)){
        std::cout<<a<<'\n';
    }
}