#include<iostream>
#include<set>
#include<algorithm>
int main() {
    int a,b;
    std::set<long long> mpA;
    std::set<long long> mpB;
    std::cin>>a>>b;
    unsigned int input;
    for(int i=0;i<a;i++){
        std::cin>>input;
        mpA.insert(input);
    }
    for(int i=0;i<b;i++){
        std::cin>>input;
        mpB.insert(input);
    }
    int same=0;
    for(auto i:mpB){
        if(mpA.find(i)!=mpA.end()){
            same++;
        }
    }
    std::cout<<a-same+b-same;
}