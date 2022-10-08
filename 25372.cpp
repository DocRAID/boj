#include <iostream>
int n, sz;
std::string s;
int main(){
  std::cin >> n;
  while(n--){
    std::cin >> s;
    sz = s.size();
    if(6 <= sz && sz <= 9) std::cout << "yes\n";
    else std::cout << "no\n";
  }
}