#include<iostream>
int main(){
    int a,b;
    std::cin>>a>>b;
    if(a%3==0 && b%3==0){
        a/=3;
        b/=3;
    }
    if(a%2==0 && b%2==0){
        a/=2;
        b/=2;
    }
    std::cout<<b-a<<" "<<b;
}