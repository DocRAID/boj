#include<iostream>
int main() {
    int a,b;
    int c=0,max=0;
    for(;1;){
        std::cin>>a>>b;
        if(b==0){
            break;
        }
        c-=a;
        c+=b;
        if(max<=c){
            max=c;
        }
    }
    std::cout<<max;
}