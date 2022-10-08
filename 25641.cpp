#include<iostream>
#include <string>
#include<vector>
bool cmp(std::string in){
    int s=0,t=0;
    for(auto i:in){
        if(i=='s'){
            s++;
        }
        else {
            t++;
        }
    }
    return s==t;
}
int main() {
    int n;
    std::string input;
    std::cin>>n>>input;
    for(;!cmp(input);){
        std::vector<char> v(input.begin(), input.end());
        std::string str(v.begin()+1, v.end());
        input = str;
    }
    std::cout<<input;
}