#include<iostream>
int main(){
    int input,a=0,b=0;
    for(int i=0;i<4;i++){
        std::cin>>input;
        a+=input;
    }
    for(int i=0;i<4;i++){
        std::cin>>input;
        b+=input;
    }
    if(a>b){
        std::cout<<a;
    }
    else{
        std::cout<<b;
    }
}