#include<iostream>
int main() {
    int n;
    long long arr[101] = {1,1,1};
    for(int i=3;i<=100;i++){
        arr[i] = arr[i-2]+arr[i-3];
    }
    std::cin>>n;
    int input;
    for(int i=0;i<n;i++){
        std::cin>>input;
        std::cout<<arr[input-1]<<'\n';
    }
}