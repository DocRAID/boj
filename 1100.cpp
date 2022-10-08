#include<iostream>
int main(){
    char arr[8][8];
    int cnt=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            std::cin>>arr[i][j];
        }
    }
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(i%2==0){
                if(j%2==0&&arr[i][j]=='F'){
                    cnt++;
                }
            }
            else{
                if(j%2==1&&arr[i][j]=='F'){
                    cnt++;
                }
            }
        }
    }
    std::cout<<cnt;
}