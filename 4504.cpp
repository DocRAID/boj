#include <iostream>

void asdf(int n, int a)
{
    if (a % n == 0){
        std::cout << a << " is a multiple of " << n << ".\n";
    }
    else{
        std::cout << a << " is NOT a multiple of " << n << ".\n";
    }
}
int main(){
    int n;
    std::cin >> n;
    for(int i=0;1;i++){
        int a;
        std::cin >> a;
        if(a==0){
            break;
        }
        asdf(n, a);
    }
}