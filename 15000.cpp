#include<iostream>
#include<string>
using std::string;
int main(){
    string s;
    std::cin>>s;
    for(int i=0;i<s.size();i++){
        putchar(toupper(s[i]));
    }
}