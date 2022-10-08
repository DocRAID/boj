#include<iostream>
#include<algorithm>
using std::string;
int main(){
    int bugger[3],drink[2];
    for(int i=0;i<3;i++){
        std::cin>>bugger[i];
    }
    for(int i=0;i<2;i++){
        std::cin>>drink[i];
    }
    std::sort(bugger,bugger+3);
    std::sort(drink,drink+2);
    std::cout<<bugger[0]+drink[0]-50;
}