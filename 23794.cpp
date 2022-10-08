#include<iostream>;
int main(){
  int n;
	std::cin>>n;
  for(int i = 1; i <= n + 2; i++){
    for(int j = 1; j <= n + 2; j++){
      if(i == 1 || i == n + 2 || j == 1 || j == n + 2){
      	std::cout << "@";	
			}
      else{
      	std::cout << ' ';	
			}
    }
  	std::cout<<"\n";
  }
}