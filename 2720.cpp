#include<iostream>
int main(){
    int n,input,Q=25,D=10,N=5,P=1;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>input;
        std::cout<<input/Q<<" ";
        input%=Q;

        std::cout<<input/D<<" ";
        input%=D;

        std::cout<<input/N<<" ";
        input%=N;

        std::cout<<input/P<<"\n";
    }
}