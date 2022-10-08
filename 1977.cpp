#include<iostream>
#include<math.h>
int main(){
    int a,b,sum=0,min=100000;
    std::cin>>a>>b;
    for(int i=0;i<100000;i++){
        if(sqrt(a)<=i){
            a=i;
            break;
        }
    }
    for(int i=a;i<=sqrt(b);i++){
        sum+=pow(i,2);
        if(pow(i,2)<min){
            min=pow(i,2);
        }
    }
   if(sum==0){
       std::cout<<-1;
   }
   else{
       std::cout<<sum<<'\n'<<min;
   }
}