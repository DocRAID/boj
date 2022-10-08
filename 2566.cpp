#include<iostream>
#include<algorithm>
int main() {
	int arr[81]={0},cnt=0,max=0,maxXY[2],a;

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            std::cin>>a;
            if(max<=a){
                max=a;
                maxXY[0]=i+1;
                maxXY[1]=j+1;
            }
            
        }
    }
    std::cout<<max<<"\n"<<maxXY[0]<<" "<<maxXY[1];
}