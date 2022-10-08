#include<iostream>
int main() {
    int n;
    std::cin>>n;
    int a;
    for(int i=0;1;i++){
        a=n+i;
        if(a%100==99){
            break;
        }
        a=n-i;
        if(a%100==99){
            break;
        }
    }
    std::cout<<a;
}