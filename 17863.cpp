#include<iostream>
#include<string>
using std::string;
int main(){
    string s;
    int fa = 0;
    std::cin>>s;
    for(int i=0;i<3;i++){
        if(s[i]!='5'){
            fa=1;
        }
    }
    if(s.size()!=7){
        fa=1;
    }
    std::cout<<(fa==0?"YES":"NO");
}