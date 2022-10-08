#include<iostream>
int main(){
  int n;
  std::cin >> n;
  for(int i = 1; i <= 5*n; i++){
    for(int j = 1; j <= 5*n; j++){
      if(i <= n || j <= n){
          std::cout << "@";
      }
    }
    std::cout << "\n";
  }
}