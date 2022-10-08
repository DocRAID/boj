#include<iostream>
int main(){
    int arr[3][2];
    for(int i=0;i<3;i++){
        std::cin>>arr[i][0]>>arr[i][1];
    }
    if(arr[0][0]==arr[1][0]){
        std::cout<<arr[2][0]<<" ";
    }else if(arr[1][0]==arr[2][0]){
        std::cout<<arr[0][0]<<" ";
    }else{
        std::cout<<arr[1][0]<<" ";
    }

    if(arr[0][1]==arr[1][1]){
        std::cout<<arr[2][1];
    }else if(arr[1][1]==arr[2][1]){
        std::cout<<arr[0][1];
    }else{
        std::cout<<arr[1][1];
    }
}