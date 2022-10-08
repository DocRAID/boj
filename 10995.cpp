#include <iostream>

int main() {
  int n;
  std::cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n*2;j++){
      if(i%2==0){
        std::cout<<(j%2==0?"*":" ");
      }
      else{
        std::cout<<(j%2!=0?"*":" ");
      }
    }
    std::cout<<"\n";
  }
}