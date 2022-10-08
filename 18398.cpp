#include<iostream>
int main(){
    int a,b,c,d;
    std::cin>>a;
    while(a){
        a-=1;
        std::cin>>b;
        while(b){
            b-=1;
            std::cin>>c>>d;
            std::cout<<c+d<<" "<<c*d<<"\n";
        }
    }
}