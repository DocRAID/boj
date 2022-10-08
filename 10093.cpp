#include<iostream>
int main(){
  int n,m;
  std::cin>>n>>m;
  int tmp;
  if(n>m){
    tmp=n;
    n=m;
    m=tmp;
  }
  if(n==m){
    std::cout<<0;
    return 0;
  }
  std::cout<<m-n-1<<"\n";
  n++;
  for(;n<m;n++){
    std::cout<<n<<" ";
  }
}